#include "ContactNode.h"
#include <iostream>

using namespace std;

// Constructors
ContactNode::ContactNode(string name, string phone, ContactNode* nextLoc) {
	contactName = name;
	contactPhoneNum = phone;
	nextNodePtr = nextLoc;
}

void ContactNode::InsertAfter(ContactNode* nodeLoc) {
	ContactNode* tmpNext = nullptr;

	tmpNext = this->nextNodePtr;
	this->nextNodePtr = nodeLoc;
	nodeLoc->nextNodePtr = tmpNext;
}

string ContactNode::GetName() {
 	return contactName;
 }

string ContactNode::GetPhoneNumber() {
	return contactPhoneNum;
}

ContactNode* ContactNode::GetNext() {
	return this->nextNodePtr;
}
void ContactNode::PrintContactNode() {
	cout << "Name: " << GetName() << endl;
	cout << "Phone number: " << GetPhoneNumber() << endl;
}
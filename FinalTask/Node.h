#pragma once
class Node
{
    friend class SplayTree;
private:
	int data; // holds the key
	Node* parent; // pointer to the parent
	Node* left; // pointer to left child
	Node* right; // pointer to right child
public:

	virtual Node* searchTree(int k) = 0;
	virtual void insert(int key) = 0;
	virtual void deleteNode(int data)=0;
};
typedef Node* NodePtr;
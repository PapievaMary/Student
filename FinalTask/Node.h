#pragma once

class Node
{
    friend class SplayTree;
private:
	int data;
	Node* parent;
	Node* left;
	Node* right;
public:
	virtual Node* searchTree(int k) = 0;
	virtual void insert(int key) = 0;
	virtual void deleteNode(int data)=0;
};

typedef Node* NodePtr;
#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class SplayTree : public Node
{
private:
	NodePtr root;
	NodePtr searchTreeHelper(NodePtr node, int key);
	void printHelper(NodePtr root, string indent, bool last);
	void leftRotate(NodePtr x);
	void rightRotate(NodePtr x);
	void splay(NodePtr x);//
	NodePtr join(NodePtr s, NodePtr t);//
	void split(NodePtr& x, NodePtr& s, NodePtr& t);//

public:
	Node* searchTree(int k)override;
	NodePtr maximum(NodePtr node);
	void insert(int key)override;
	void deleteNode(int data)override;
	void prettyPrint(); 
};


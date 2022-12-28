#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class SplayTree :
    public Node
{
private:
	NodePtr root;
	void preOrderHelper(NodePtr node);
	void inOrderHelper(NodePtr node);
	void postOrderHelper(NodePtr node);
	NodePtr searchTreeHelper(NodePtr node, int key);
	void deleteNodeHelper(NodePtr node, int key);
	void printHelper(NodePtr root, string indent, bool last);
	void leftRotate(NodePtr x);
	void rightRotate(NodePtr x);
	void splay(NodePtr x);
	NodePtr join(NodePtr s, NodePtr t);
	void split(NodePtr& x, NodePtr& s, NodePtr& t);

public:
	SplayTree();
	void preorder();
	void inorder(); 
	void postorder();
	Node* searchTree(int k)override;
	NodePtr minimum(NodePtr node); 
	NodePtr maximum(NodePtr node);
	NodePtr successor(NodePtr x);
	NodePtr predecessor(NodePtr x);
	void insert(int key)override;
	NodePtr getRoot(); 
	void deleteNode(int data)override;
	void prettyPrint(); 

};


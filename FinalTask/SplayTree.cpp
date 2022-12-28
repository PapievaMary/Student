#include "SplayTree.h"
#include "Node.h"
#include <iostream>
using namespace std;

NodePtr SplayTree::searchTreeHelper(NodePtr node, int key) {
	if (node == nullptr || key == node->data) {
		return node;
	}

	if (key < node->data) {
		return searchTreeHelper(node->left, key);
	}
	return searchTreeHelper(node->right, key);
}

void SplayTree::deleteNodeHelper(NodePtr node, int key) {
	NodePtr x = nullptr;
	NodePtr t, s;
	while (node != nullptr) {
		if (node->data == key) {
			x = node;
		}

		if (node->data <= key) {
			node = node->right;
		}
		else {
			node = node->left;
		}
	}

	if (x == nullptr) {
		cout << "Couldn't find key in the tree" << endl;
		return;
	}
	split(x, s, t); // split the tree
	if (s->left) { // remove x
		s->left->parent = nullptr;
	}
	root = join(s->left, t);
	delete(s);
	s = nullptr;
}

void SplayTree::printHelper(NodePtr root, string indent, bool last) {
	// print the tree structure on the screen
	if (root != nullptr) {
		cout << indent;
		if (last) {
			cout << "\\____";
			indent += "     ";
		}
		else {
			cout << "|____";
			indent += "|    ";
		}

		cout << root->data << endl;

		printHelper(root->left, indent, false);
		printHelper(root->right, indent, true);
	}
}

// rotate left at node x
void SplayTree::leftRotate(NodePtr x) {
	NodePtr y = x->right;
	x->right = y->left;
	if (y->left != nullptr) {
		y->left->parent = x;
	}
	y->parent = x->parent;
	if (x->parent == nullptr) {
		this->root = y;
	}
	else if (x == x->parent->left) {
		x->parent->left = y;
	}
	else {
		x->parent->right = y;
	}
	y->left = x;
	x->parent = y;
}

// rotate right at node x
void SplayTree::rightRotate(NodePtr x) {
	NodePtr y = x->left;
	x->left = y->right;
	if (y->right != nullptr) {
		y->right->parent = x;
	}
	y->parent = x->parent;
	if (x->parent == nullptr) {
		this->root = y;
	}
	else if (x == x->parent->right) {
		x->parent->right = y;
	}
	else {
		x->parent->left = y;
	}
	y->right = x;
	x->parent = y;
}

// splaying
void SplayTree::splay(NodePtr x) {
	while (x->parent) {
		if (!x->parent->parent) {
			if (x == x->parent->left) {
				// zig rotation
				rightRotate(x->parent);
			}
			else {
				// zag rotation
				leftRotate(x->parent);
			}
		}
		else if (x == x->parent->left && x->parent == x->parent->parent->left) {
			// zig-zig rotation
			rightRotate(x->parent->parent);
			rightRotate(x->parent);
		}
		else if (x == x->parent->right && x->parent == x->parent->parent->right) {
			// zag-zag rotation
			leftRotate(x->parent->parent);
			leftRotate(x->parent);
		}
		else if (x == x->parent->right && x->parent == x->parent->parent->left) {
			// zig-zag rotation
			leftRotate(x->parent);
			rightRotate(x->parent);
		}
		else {
			// zag-zig rotation
			rightRotate(x->parent);
			leftRotate(x->parent);
		}
	}
}

// joins two trees s and t
NodePtr SplayTree::join(NodePtr s, NodePtr t) {
	if (!s) {
		return t;
	}

	if (!t) {
		return s;
	}
	NodePtr x = maximum(s);
	splay(x);
	x->right = t;
	t->parent = x;
	return x;
}

// splits the tree into s and t
void SplayTree::split(NodePtr& x, NodePtr& s, NodePtr& t) {
	splay(x);
	if (x->right) {
		t = x->right;
		t->parent = nullptr;
	}
	else {
		t = nullptr;
	}
	s = x;
	s->right = nullptr;
	x = nullptr;
}

SplayTree::SplayTree() {
		root = nullptr;
	}

	// search the tree for the key k
	// and return the corresponding node
	Node* SplayTree::searchTree(int k) {
		Node* x = searchTreeHelper(this->root, k);
		if (x) {
			splay(x);
		}
		return x;
	}

	// find the node with the minimum key
	NodePtr SplayTree::minimum(NodePtr node) {
		while (node->left != nullptr) {
			node = node->left;
		}
		return node;
	}

	// find the node with the maximum key
	NodePtr SplayTree::maximum(NodePtr node) {
		while (node->right != nullptr) {
			node = node->right;
		}
		return node;
	}

	// insert the key to the tree in its appropriate position
	void SplayTree::insert(int key) {
		// normal BST insert
		NodePtr node = new SplayTree;
		node->parent = nullptr;
		node->left = nullptr;
		node->right = nullptr;
		node->data = key;
		NodePtr y = nullptr;
		NodePtr x = this->root;

		while (x != nullptr) {
			y = x;
			if (node->data < x->data) {
				x = x->left;
			}
			else {
				x = x->right;
			}
		}

		// y is parent of x
		node->parent = y;
		if (y == nullptr) {
			root = node;
		}
		else if (node->data < y->data) {
			y->left = node;
		}
		else {
			y->right = node;
		}

		// splay the node
		splay(node);
	}

	NodePtr SplayTree::getRoot() {
		return this->root;
	}

	// delete the node from the tree
	void SplayTree::deleteNode(int data) {
		deleteNodeHelper(this->root, data);
	}

	// print the tree structure on the screen
	void SplayTree::prettyPrint() {
		printHelper(this->root, "", true);
	}
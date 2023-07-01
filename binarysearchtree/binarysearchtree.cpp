#include <iostream>
#include <string>

using namespace std;

class Node {
public :
	string info;
	Node* leftchild;
	Node* rightchild;

	//condtructor for  the node class
	Node(string i, Node* l, Node* r) {
		info = i;
		leftchild = l;
		rightchild = r;
	}

};

class BinaryTree {
public:
	Node* ROOT;

	BinaryTree() {
		ROOT = NULL; //initializing ROOT to null
	}

	void insert(string element) //inset a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL);// alocate memory for the new node
		newNode->info = element;// Assign value the data field of the new node
		newNode->leftchild= NULL; //make the left child of the new node point to null

	}
};
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
		newNode->rightchild = NULL; //make the right child of the new node point to null

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode); //locate the node which will be the parent of node to be inserted

		if (parent = NULL)// if the parent is NULL (tree is empty)
		{
			ROOT = newNode; // Mark the new node as root
			return;// exit
		}
		if (element < parent->info)//  if the valuein the data field pf the new node is less than of the parent
		{
			parent->leftchild = newNode; // make the left child of the parent point to the new node
		}
		else if (element > parent->info)// if the value in the data field of the new node is geater than that of the parent
		{
			parent->rightchild = newNode; // make the right of the parent point to the  new node
		}
	}
};
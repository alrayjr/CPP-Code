#pragma once
class List
{
public:
	class Node {
	public:
		int data;
		Node* pNext;
		Node(int data = 0, Node* pNext = nullptr) { //constructor
			this->data = data;
			this->pNext = pNext;
		}
	};
	Node* head;
	int size;

	//default constuctor
	List();

	//insert the element in our list
	void push_back(int data);
};


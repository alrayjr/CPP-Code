#include "List.h"

List::List()
{
	size = 0;
	head = nullptr;
}

void List::push_back(int data)
{
	//the list is empty, insert the first element
	if (head == nullptr) {
		head = new Node(data);
	}
	//the list is not empty
	else {
		Node* temp = new Node(data);
		Node* current = head;
		while (current->pNext != nullptr){
			current = current->pNext;
		}
		current->pNext = temp;
	}
	size++;
}
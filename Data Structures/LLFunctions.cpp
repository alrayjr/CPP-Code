#include <iostream>
using namespace std;


class Node
{
public:
    int data;
    Node* next;

};


//prints contents of linked list from head
void printList(Node *node)
{
    while(node != NULL)
          {
              cout << " " <<node->data; //prints nodes data
              node = node->next; //set pointer to next node
          }
}

void insertBeg(Node** headRef, int newData) //** = pointer to pointer(reference), dereference with * to get value of pointed pointer
{
    Node* newNode = new Node(); //create the new node to be inserted
    newNode->data = newData; //inserts new data into node to be inserted
    newNode->next = *headRef; //dereference head ref and assign old head to the next node
    *headRef = newNode; // set head to reference new node (doesn't need to be dereferenced since newNode is already a pointer)
    }

void insertAfter(Node* prevNode, int newData)
{
    //null check
    if(prevNode == NULL)
    {
        cout <<"the given prevNode cannot be NULL";
        return;
    }


    //data manipulation
    Node* newNode = new Node(); //Node *newNode works the same way
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;

}

void insertLast(Node** headRef, int newData)
{
    Node *newNode = new Node();
    Node *last = *headRef; //start with head ref
    newNode->data = newData;//put in data
    newNode->next = NULL; //

    if (*headRef == NULL) //if empty list make new node as head
    {
    *headRef = newNode;
    return;
    }

    while (last->next != NULL) //otherwise find last element
    {
        last = last->next;
    }
    last->next = newNode; //change next of last node
    return;
}
int main()
{
/* Start with the empty list */
Node* head = NULL;
// Insert 6. So linked list becomes 6->NULL
insertLast(&head, 6);
// Insert 7 at the beginning.
// So linked list becomes 7->6->NULL
insertBeg(&head, 7);
// Insert 1 at the beginning.
// So linked list becomes 1->7->6->NULL
insertBeg(&head, 1);
// Insert 4 at the end. So
// linked list becomes 1->7->6->4->NULL
insertLast(&head, 4);
// Insert 8, after 7. So linked
// list becomes 1->7->8->6->4->NULL
insertAfter(head->next, 8);
cout<<"Created Linked list is: ";
printList(head);
return 0;
}





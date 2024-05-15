//Assignment 2.cpp
//by: Adrian Ray
//Class: COP4415.01

#include <iostream>
using namespace std;


class Node
{
public:
    int data;
    Node* next;

};

void insertBeg(Node** headRef, int newData) //** = pointer to pointer(reference), dereference with * to get value of pointed pointer
    {
    Node* newNode = new Node(); //create the new node to be inserted
    newNode->data = newData; //inserts new data into node to be inserted
    newNode->next = *headRef; //dereference head ref and assign old head to the next node
    *headRef = newNode; // set head to reference new node (doesn't need to be dereferenced since newNode is already a pointer)
    }



//prints contents of linked list from head
void printList(Node *node)
{
    while(node != NULL)
          {
              cout << node->data << "-> ";//prints nodes data
              node = node->next; //set pointer to next node
          }
          cout<<"NULL" << endl;
}




Node* removeAll(Node* head, int val)
{
    if(head==NULL)// check if empty
        return NULL;

    while (head!=NULL && head->data == val) //if starting entries need to be deleted just move head to next and check again
    {
        head = head->next;
    }


    Node *prevNode = NULL;
    Node *currentNode = head;


    while (currentNode!=NULL) // go through rest of list and delete none head nodes with data = val
    {
        if (currentNode->data == val)
        {
            prevNode->next = currentNode->next;
        }
        else
        {
            prevNode = currentNode;
        }
        currentNode = currentNode->next;
    }
    return head;
}




Node* insertToPlace(Node* head, int val, int place)
{
    if(head==NULL || place<=1) //if list is empty or place is not above 1 then stop
        return head;

    Node* tempNode = new Node(); // make new node to be inserted
    tempNode->data = val; //set new node data to val

    int counter = 0;

    Node *currentNode = head;
    Node *prevNode = NULL;

    while(currentNode!=NULL)
    {
        counter++;
        if(counter == place) // when the counter = place
        {
            prevNode = currentNode->next; //let prevNode hold current nodes next
            currentNode->next = tempNode; //set next node to tempNode
            tempNode->next = prevNode; // set temp node to prev nodes held node
        }
        currentNode = currentNode->next;

    }

}



int main()
{

Node* test = NULL;

insertBeg(&test, 4);
insertBeg(&test, 3);
insertBeg(&test, 2);
insertBeg(&test, 1);

cout<<"Linked List is:";
printList(test); //new List from 1-4



insertToPlace(test,10,2);//throw in some 10's
insertToPlace(test,10,5);

cout<<"Linked List is: ";
printList(test);



removeAll(test,10); //kill those 10's

cout<<"Linked List is: ";
printList(test); // congrats no more 10's


return 0;
}



#include <iostream>
using namespace std;

struct Node{
    int data
    Node* next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }

};

struct Queue{
    Node *front, *rear; //creates a node called front and one called rear
    Queue()
    {
        front = rear = NULL;
    }
    void enQueue(int x)
    {
        Node* newNode = new Node(x);

        if(rear == NULL){ //check if queue is empty
            front = rear = newNode;
            return; // exit function obviously
        }
        rear->next = newNode;
        rear = newNode;

    }

    void deQueue{
    if(front == NULL){ // if queue is empty do nothing
        return;
    }

    Node* temp = front;
    front = front->next;

    if(front == NULL){ // when theres only one element in queue
        rear = NULL;
    }
    delete temp;
    }

};

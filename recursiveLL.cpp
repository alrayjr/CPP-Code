#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;


class Node{;

int data;
Node *next;

    Node* inser

}

Node* insert(Node* head, int item){

    if(head==NULL || item <=head->data) //base case, assumes list is sorted
    {
        Node *newNode = new Node();
        newNode->data = item;
        newNode->next = head;
        return newNode;
    }
    //recursion time
    head->next = insert(head->next, item);
    return head;
}

Node* del(Node *head, int item){
    //base cases
    if(head== NULL)
        return head; // or NULL, same shit
    if(head->data==item)
    {
        Node* rest = head->next;
        delete head;
        return rest;
    }
    head->next == del(head->next, item);

    return head;
}

void print(Node *list){
    if(list != NULL)
    {
        cout<<list->data<<endl;
        print(list->next);
    }


}

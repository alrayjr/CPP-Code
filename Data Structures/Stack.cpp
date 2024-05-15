#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namspace std;

#define MAX 100

class Stack{
public:
    int top;
    char exp[MAX]; // char array
    Stack(){top = -1};
    bool push(char item); //function prototype
    char pop();//function prototype

};
bool Stack::push(char item)  //implementing function prototype from Stack class
{
    if(top>= MAX-1)
    {
        cout<< "Stack Overflow"
        return false;
    }
    else
    {
        top++;
        exp{top} = item;
        return true;
    }
}

char Stack::pop()
{
    if (top == -1)
    {
        cout<< "stack underflow";
        return 0;
    }
    else
    {
        intx = exp[top];
        top--;
        return x;
    }
}

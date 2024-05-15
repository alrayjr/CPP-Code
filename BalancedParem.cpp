#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define MAX 100

class Stack{
public:
    int top;
    char exp[MAX];
    Stack()
    {
        top = -1;

    }
    bool push(char item); // prototype
    char pop();
};

bool Stack::push(char item)
{
    if(top >= MAX -1)
    {
        cout<<"Stack Overflow, what you doin?";
        return false;
    }
    else
    {
        top++;
        exp[top]==item;
        return true;
    }

}

char Stack::pop()
{
    if (top == -1) //cant put shit at a negative spot in array
    {
        cout <<"Stack underflow, wow how'd ya manage that?";
        return 0;
    }
    else
    {
    char x = exp[top];
    top--;
    return x;
    }
}

//return 1 if char 1 and char 2 are matching left and right brackets

int isMatchingPair(char char1, char char2)
{
    if(char1 == '(' && char2 == ')')
        return 1;
    else if(char1 == '{' && char2 == '}')
        return 1;
    else if(char1 == '[' && char2 == ']')
        return 1;
    else
        return 0;
}


int areParenthesisBalanced(char exp[])
{
    Stack* s = new Stack();

    int i = 0;
    while(exp[i])
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            s->push(exp[i]);
        if(exp[i] == ']' || exp[i] == '}' || exp[i] == ')')
            {
            if (s->top == -1)
                return 0;
            else if(!isMatchingPair(s->pop(), exp[i]))
                return 0;
            }
        i++;
    }
    if(s->top == -1)
        return 1;
    else
        return 0;
}

int main()
{
    char exp[100];
    cout<<"enter the expression:\n";
    cin>> exp;

    //function
    if (areParenthesisBalanced(exp))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    return 0;
}




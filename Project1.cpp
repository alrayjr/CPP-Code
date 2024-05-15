//Adrian Ray
//COP4415.01
//project 1
//10/21/2022
#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

#define MAX 100

class Stack {
    public:
        int top;
        char exp[MAX];
    Stack() {
        top = -1;
    }
    bool push(char item);
    char pop();
    char peek();
    bool isEmpty();
};

bool Stack::push(char item) {
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
    	top++;
		exp[top] = item;
		return true;
	}
}

char Stack::pop() {

    if(top == -1) {
        cout<< "stack underflow";
        return 0;
    }

    else {
        int x = exp[top];
        top--;
        return x;
	}

}

char Stack::peek() {
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		char x = exp[top];
		return x;
	}
}

bool Stack::isEmpty() {
	return (top < 0);
}
//function for determining precedent of opperands
int prec(char c) {
    if(c == '^') {
        return 3;
    }

    else if(c == '/' || c == '*') {
        return 2;
    }

    else if(c == '+' || c == '-') {
        return 1;
    }

    else {
        return -1;
    }
}

// function to convert infix expression
string infixToPostfix(string s) {

    class Stack st;

    string result;
    int len = s.length();

    for(int i = 0; i < len; i++) {
        char c = s[i];

        // If the scanned character is an operand, add it to output string.
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            result += c;
        }
        else if(c == '(') {
            st.push('(');
        }

        else if(c == ')') {
            while(st.exp[st.top] != '(') {
                result += st.exp[st.top];
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.isEmpty() && prec(s[i]) <= prec(st.exp[st.top])) {
                result += st.exp[st.top];
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all the rest of the stack
    while(!st.isEmpty()) {
        result += st.exp[st.top];
        st.pop();
    }

    return result;
}

// evaluate postfix
int evaluatePostfix(string exp) {

    class Stack st;
    int len = exp.length();

    for (int i = 0; i < len; i++) {
        if (exp[i] >= '0' &&  exp[i] <= '9') {
            st.push(exp[i] - '0');
        }
        else {

            int a = st.exp[st.top];
            st.pop();
            int b = st.exp[st.top];
            st.pop();
            //performing the operation on the operands
            switch (exp[i]) {
                case '+': // addition
                    st.push(b + a);
                    break;
                case '-': // subtraction
                    st.push(b - a);
                    break;
                case '*': // multiplication
                    st.push(b * a);
                    break;
                case '/': // division
                    st.push(b / a);
                    break;
            }
        }
    }
    //returning the calculated result
    return st.exp[st.top];
}


int main() {

    string exp;
    string postfix;
    int evaluation;

    cout << "Enter an expression: " << endl;
    cin >> exp;

    postfix = infixToPostfix(exp);
    cout << postfix << "\n";

    evaluation = evaluatePostfix (postfix);
    cout << evaluation << "\n";

    return 0;
}

#include <iostream>

using namespcae std;

class Node
{

    public:
        int key;
        Node* left;
        Node* right;
        int height;
};

int max(int a.int b);

int height(Node *N)
{
    if(N == NULL)
        return 0;
    else
        return N->height;
}

int max(inta, int b)
{
    return (a>b)? a:b;

}

Node* newNode(int key)
{
    Node* node = new Node();
    node->key = key;
    node->left = node->right = NULL;
    node->height = 1;
    return node;

}

Node *rightRotate(node *C)
{
    Node* B = C->left;
    Node* T2 = B->right;

    B->right = C;
    C->left = T2;

    C->height = 1+ max(height(C->left), height(C->right));
    B->height = 1+ max(height(B->left), height(B->right));

    return B;
}

Node *leftRotate(node *X)
{
    Node* Y = X->right;
    Node* T2 = Y->left;

    Y->left = X;
    X->right = T2;

    X->height = 1+ max(height(X->left), height(X->right));
    Y->height = 1+ max(height(Y->left), height(Y->right));

    return Y;
}


int getBalance(Node* N)
{
    if(N == NULL)
        return 0;
    return height(N->left) - height(N->right);

}

Node* insert (Node* node, int key)
{
    // perform normal BST insert
    if(node == NULL)
        return newNode(key);
    if(key < node->key)
        node->left = insert(node->left, key);
    else if(key > node->key)
        node->right = insert(node->right, key);
    else
        return node;

    //update height of this ancestor node
    node->height = 1 + max(height(node->left), height(node->right))

    int balance = getBalance(node);


    //if this node becomes unbalanced, then there are 4 cases

    //left left case
    if(balance > 1 && key< node->left->key)
        return rightRotate(node);
    //right right case
    if(balance < 1 && key> node->right->key)
        return leftRotate(node);
    //left right case
    if(balance > 1 && key >node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    //right left case
    if(balance < -1 && key >node->right->key)
    {
        node->left = rightRotate(node->left);
        return leftRotate(node);
    }
    return node;
}

int main()
{
    Node *root =NULL;

    root= insert(root,10);
    root= insert(root,20);
    root= insert(root,30);
    root= insert(root,40);
    root= insert(root,50);
    root= insert(root,25);
}

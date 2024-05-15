//Adrian Ray
//COP4415.01
//11/1/2022
//Assignment 4

#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(){
      data = 0;
      left = NULL;
      right = NULL;

    }
    Node(int val){
      data = val;
      left = NULL;
      right = NULL;

    }
};


Node* insert(Node* root, Node* element);
void inorder(Node* root);
int numNodes(Node* root);
int findKthSmallest(Node* root, int k);
int menu();




//Gets a node and the root of the Binary search tree
//Insert the node into the BST
//Return the root after insertion
Node* insert(Node* root,Node* element) {
  // Inserting into an empty tree.
  if (root == NULL){
    return element;
  }
  else {
    // element should be inserted to the right.
    if (element->data > root->data) {
      // There is a right subtree to insert the node.
      if (root->right != NULL)
        root->right = insert(root->right, element);
      // Place the node directly to the right of root.
      else
        root->right = element;
    }
    // element should be inserted to the left.
    else {
      // There is a left subtree to insert the node.
      if (root->left != NULL)
        root->left = insert(root->left, element);
      // Place the node directly to the left of root.
      else
        root->left = element;
    }
    // Return the root pointer of the updated tree.
    return root;
  }
}

//Prints the inorder traversal of the tree pointed to by root
void inorder(Node *currentPtr) {
  // Only traverse the node if it's not null.
  if (currentPtr != NULL) {
    inorder(currentPtr->left); // Go Left.
    cout<<" "<<currentPtr->data; // Print the root.
    inorder(currentPtr->right); // Go Right.
  }
}

// Returns the number of nodes in the tree pointed to by root.

int numNodes(Node* root){
   int size = 1;

   if (root->left != NULL) size += numNodes(root->left);
   if (root->right != NULL) size += numNodes(root->right);

   return size;
}

// Returns the kth smallest value in the BST pointed to by root
// Guaranteed that k is in between 1 and the number of nodes in the tree
// pointed to by root.
int count = 0;
Node* kthSmallest(Node* root, int& k)
{
    if (root == NULL)// base
        return NULL;

    Node* left = kthSmallest(root->left, k);// search in left subtree

    if (left != NULL)    // if smallest in left tree return it
        return left;
    count++;
    if (count == k) //if kth is found return it
        return root;

    return kthSmallest(root->right, k); //search right tree
}
int findKthSmallest(Node* root, int k) {
Node* res = kthSmallest(root, k);
return res->data;
}



// Prints out the menu of choices for the user and returns their choice.
int menu() {

  int ans;
  cout<<"Here are your choices.\n";
  cout<<"1. Insert an item into your tree.\n";
  cout<<"2. Print out an inorder traversal.\n";
  cout<<"3. Print the number of the nodes. \n";
  cout<<"4. Finding kth smallest element.\n";
  cout<<"5. Exit.\n";
  cin>> ans;
  return ans;
}

int main() {

  Node *myRoot=NULL;
  Node* tempNode;
  int nNodes;
  int val;
  int ans;
  int rank;


  ans = menu();
  while (ans<5) {

    if (ans == 1) {

      // Get value to insert.
      cout<<"What value would you like to insert?";
      cin>>val;
      tempNode = new Node(val); // Create the node.

      // Insert the value.
      myRoot = insert(myRoot, tempNode);
    }
     if (ans == 2) {

      // Print the values in tree.
      cout<<"Here is an inorder traversal of your tree: ";
      inorder(myRoot);
      cout<<"\n";
    }


    if (ans == 3) {
      nNodes = numNodes(myRoot);
      cout<<nNodes;
      cout<<"\n";

    }

    if (ans == 4) {
      cout<<"Which ranked item would you like to find?\n";
      cin>>rank;

      cout<<"The item is:"<< findKthSmallest(myRoot, rank);
      cout<<"\n";

    }



    // See if they want to insert more nodes.
    ans = menu();
  }


  return 0;
}

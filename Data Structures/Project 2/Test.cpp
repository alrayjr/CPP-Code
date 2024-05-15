#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node* left;
struct node* right;
};
struct node* insert(struct node* root, int data);
struct node* delete(struct node* root, int data);
int search(struct node* root, int data);
void print(struct node* root);
void freetree(struct node* root);
int main(int argc, char *argv[])
{
if(argc < 2)
{
printf("Usage: %s <input file>\n\n", argv[0]);
return -1;
}
FILE * ifile = fopen(argv[1], "r");
if(ifile == NULL)
{
printf("Error opening %s\n\n", argv[1]);
return -2;
}
char command;
int data;
struct node * tree = NULL;
while(fscanf(ifile, "%c", &command) != EOF)
{
if(command != 'p')
{
if(fscanf(ifile, "%d", &data) == EOF)
break;
}
switch(command)
{
case 'i':
{
struct node * n = insert(tree, data);
if(n == NULL)
{
printf("duplicate\n");
}
else
{
if(tree == NULL)
tree = n;
printf("inserted\n");
}
break;
}
case 's':
{
int srch = search(tree, data);
if(srch)
{
printf("present\n");
}
else
{
printf("absent\n");
}
break;
}
case 'p':
{
print(tree);
printf("\n");
break;
}
case 'd':
{
if(tree->data == data)
{
tree = delete(tree, data);
printf("deleted\n");
}
else
{
struct node *n = delete(tree, data);
if(n == NULL)
{
printf("absent\n");
}
else
{
tree = n;
printf("deleted\n");
}
}
break;
}
}
}
freetree(tree);
return 0;
}
struct node* insert(struct node* root, int data)
{
if(root == NULL)
{
struct node * n = (struct node*)malloc(sizeof(struct node));
n->left = n->right = NULL;
n->data = data;
return n;
}
if(data == root->data)
return NULL;
if(data < root->data)
{
if(root->left == NULL)
{
struct node * n = (struct node*)malloc(sizeof(struct node));
n->left = n->right = NULL;
n->data = data;
root->left = n;
return n;
}
else
{
return insert(root->left, data);
}
}
else
{
if(root->right == NULL)
{
struct node * n = (struct node*)malloc(sizeof(struct node));
n->left = n->right = NULL;
n->data = data;
root->right = n;
return n;
}
else
{
return insert(root->right, data);
}
}
}
struct node* delete(struct node* root, int data)
{
if(root == NULL)
return NULL;
int pp = 0;
if(root->data == 8)
pp = 1;
struct node *par = NULL;
struct node *cur = root;
while(cur != NULL)
{
if(data == cur->data)
{
if(cur->left == NULL || cur->right == NULL)
{
if(par == NULL)
{
if(cur->left == NULL)
root = cur->right;
else
root = cur->left;
}
else
{
if(cur == par->left)
{
if(cur->left == NULL)
par->left = cur->right;
else
par->left = cur->left;
}
else
{
if(cur->left == NULL)
par->right = cur->right;
else
par->right = cur->left;
}
}
free(cur);
return root;
}
else
{
int nextvalue;
struct node * auxroot = cur->right;
while(auxroot->left != NULL)
auxroot = auxroot->left;
cur->data = auxroot->data;
cur->right = delete(cur->right, cur->data);
return root;
}
}
else if(data < cur->data)
{
par = cur;
cur = cur->left;
}
else
{
par = cur;
cur = cur->right;
}
}
return NULL;
}
int search(struct node* root, int data)
{
if(root == NULL)
return 0;
if(data < root->data)
return search(root->left, data);
else if(data > root->data)
return search(root->right, data);
else
return 1;
}
void print(struct node* root)
{
if(root == NULL)
return;
printf("(");
print(root->left);
printf("%d", root->data);
print(root->right);
printf(")");
}
void freetree(struct node* root)
{
if(root == NULL)
return;
freetree(root->left);
freetree(root->right);
free(root);
}

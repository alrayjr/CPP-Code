//Project 2
//Adrian Ray
//COP4415.01
//11/18/2022

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 50



typedef struct itemNode
{
    char name[MAXLEN];

    int count;

    struct itemNode *left, *right;

} itemNode;

typedef struct treeNameNode
{
    char treeName[MAXLEN];

    struct treeNameNode *left, *right;

    itemNode *theTree;

} treeNameNode;

treeNameNode *createTreeNameNode(char *name)
{
    treeNameNode *nameNode = (treeNameNode *)malloc(sizeof(treeNameNode));

    strcpy(nameNode->treeName, name);

    nameNode->left = NULL;
    nameNode->right = NULL;

    nameNode->theTree = NULL;

    return nameNode;
}

//Create element in tree
itemNode *createItemNode(char *name, int count)
{
    itemNode *node = (itemNode *)malloc(sizeof(itemNode));

    strcpy(node->name, name);

    node->count = count;

    node->left = NULL;
    node->right = NULL;

    return node;
}

//Add new tree
treeNameNode *insertNameNode(treeNameNode *root, treeNameNode *newNode)
{
    if (root == NULL)
        return newNode;
    else
    {
        if (strcmp(root->treeName, newNode->treeName) < 0)
        {
            if (root->right != NULL)
                root->right = insertNameNode(root->right, newNode);
            else
                root->right = newNode;
        }
        else
        {
            if (root->left != NULL)
                root->left = insertNameNode(root->left, newNode);
            else
                root->left = newNode;
        }
    }
    return root;
}

//Add new item into tree
itemNode *insertItemNode(itemNode *treeRoot, itemNode *newNode)
{
    if (treeRoot == NULL)
        return newNode;
    else
    {
        if (strcmp(treeRoot->name, newNode->name) < 0)
        {
            if (treeRoot->right != NULL)
                treeRoot->right = insertItemNode(treeRoot->right, newNode);
            else
                treeRoot->right = newNode;
        }
        else
        {
            if (treeRoot->left != NULL)
                treeRoot->left = insertItemNode(treeRoot->left, newNode);
            else
                treeRoot->left = newNode;
        }
    }
    return treeRoot;
}

//Create trees from input file
treeNameNode *buildNameTree(FILE *inFile, int N)
{
    if (inFile == NULL)
        return NULL;

    treeNameNode *nameRoot = NULL;
    char name[MAXLEN];
    for (int i = 0; i < N; i++)
    {
        fscanf(inFile, "%s", name);
        treeNameNode *newNameNode = createTreeNameNode(name);
        nameRoot = insertNameNode(nameRoot, newNameNode);
    }
    return nameRoot;
}

//Find a specific tree from treeName
treeNameNode *searchNameNode(treeNameNode *root, char treeName[MAXLEN])
{
    if (root == NULL)
        return NULL;
    treeNameNode *nameNode;
    if (strcmp(root->treeName, treeName) == 0)
        return root;
    else if (strcmp(root->treeName, treeName) > 0)
        nameNode = searchNameNode(root->left, treeName);
    else
        nameNode = searchNameNode(root->right, treeName);
    return nameNode;
}

//Fill trees from input file
void populateTrees(FILE *inFile, treeNameNode *nameRoot, int I)
{
    if (inFile == NULL)
        return;
    else
    {
        int count;
        char treeName[MAXLEN];
        char itemName[MAXLEN];
        for (int i = 0; i < I; i++)
        {
            fscanf(inFile, "%s %s %d", treeName, itemName, &count);
            itemNode *newItemNode = createItemNode(itemName, count);
            treeNameNode *treeNode = searchNameNode(nameRoot, treeName);
            treeNode->theTree = insertItemNode(treeNode->theTree, newItemNode);
        }
    }
}

//Display the elements of a tree in order alphabetically
void displayInOrderNameTree(treeNameNode *root, FILE *outFile)
{
    if (root != NULL)
    {
        displayInOrderNameTree(root->left, outFile);
        printf("%s ", root->treeName);
        fprintf(outFile, "%s ", root->treeName);
        displayInOrderNameTree(root->right, outFile);
    }
}

//Traverses the itemNode sub tree
void traverseSubTree(itemNode *root, FILE *outFile)
{
    if (root != NULL)
    {
        traverseSubTree(root->left, outFile);
        printf("%s ", root->name);
        fprintf(outFile, "%s ", root->name);
        traverseSubTree(root->right, outFile);
    }
}

//Traverses the tree and uses traverse subtree and prints it out
void traverse_in_traverse(treeNameNode *root, FILE *outFile)
{
    if (root != NULL)
    {
        traverse_in_traverse(root->left, outFile);
        printf("\n***%s***\n", root->treeName);
        fprintf(outFile, "\n***%s***\n", root->treeName);
        traverseSubTree(root->theTree, outFile);
        traverse_in_traverse(root->right, outFile);
    }
}

//Item before helper
int count_before(itemNode *root, char *nodeName)
{
    if (root == NULL)
        return 0;
    if (strcmp(root->name, nodeName) == 0)
        return 1;
    else if (strcmp(root->name, nodeName) > 0)
        return 1 + count_before(root->left, nodeName);
    else
        return 1 + count_before(root->right, nodeName);
}

//Finds the item before the given node
void item_before(treeNameNode *root, char *treeName, char *nodeName, FILE *outFile)
{
    treeNameNode *tree = searchNameNode(root, treeName);
    int count = count_before(tree->theTree, nodeName);
    printf("\nitem before %s: %d", nodeName, count + 1);
    fprintf(outFile, "\nitem before %s: %d", nodeName, count + 1);
}


//Adds up total of all nodes
int count_all(itemNode *root)
{
    if (root == NULL)
        return 0;
    else
        return root->count + count_all(root->left) + count_all(root->right);
}

void count_nodes(treeNameNode *root, char *treeName, FILE *outFile)
{
    treeNameNode *tree = searchNameNode(root, treeName);
    if (tree == NULL)
    {
        printf("\n%s does not exist", treeName);
        fprintf(outFile, "\n%s does not exist", treeName);
    }
    else
    {
        int count = count_all(tree->theTree);
        printf("\n%s count %d", treeName, count);
        fprintf(outFile, "\n%s count %d", treeName, count);
    }
}


//1st height helper function
int calculate_left(itemNode *root)
{
    int left = 1;
    while (root->left != NULL)
    {
        left++;
        root = root->left;
    }
    if (root->right != NULL)
    {
        while (root->right != NULL)
        {
            left++;
            root = root->right;
        }
    }
    return left;
}
//2nd height helper
int calculate_right(itemNode *root)
{
    int right = 1;
    while (root->right != NULL)
    {
        right++;
        root = root->right;
    }
    if (root->left != NULL)
    {
        while (root->left != NULL)
        {
            right++;
            root = root->left;
        }
    }
    return right;
}

//Determine if a tree is balanced or not
void height_balance(treeNameNode *root, char *treeName, FILE *outFile)
{
    treeNameNode *tree = searchNameNode(root, treeName);
    int left;
    int right;
    int height;
    if (tree->theTree->left == NULL)
        left = -1;
    if (tree->theTree->right == NULL)
        right = -1;
    if (tree->theTree->left != NULL)
    {
        left = calculate_left(tree->theTree->left);
    }
    if (tree->theTree->right != NULL)
    {
        right = calculate_right(tree->theTree->right);
    }
    height = abs(right - left);
    printf("\n%s: left height %d, right height %d, difference %d, %s",
           treeName, left, right, height, height == 0 ? "balanced" : "not balanced");
    fprintf(outFile, "\n%s: left height %d, right height %d, difference %d, %s",
            treeName, left, right, height, height == 0 ? "balanced" : "not balanced");
}


//Searches tree for a given node and returns the count of that node
int searchTree(itemNode *root, char *nodeName)
{
    if (root == NULL)
        return 0;
    if (strcmp(root->name, nodeName) == 0)
        return root->count;
    else if (strcmp(root->name, nodeName) > 0)
        return searchTree(root->left, nodeName);
    else
        return searchTree(root->right, nodeName);
}

//Finds the tree to search for, then calls search tree to search for the specific node
void search(treeNameNode *root, char *treeName, char *nodeName, FILE *outFile)
{
    treeNameNode *tree = searchNameNode(root, treeName);
    if (tree == NULL)
    {
        printf("\n%s does not exist", treeName);
        fprintf(outFile, "\n%s does not exist", treeName);
    }
    else
    {
        int count = searchTree(tree->theTree, nodeName);
        if (count == 0)
        {
            printf("\n%s not found in %s", nodeName, treeName);
            fprintf(outFile, "\n%s not found in %s", nodeName, treeName);
        }
        else
        {
            printf("\n%d %s found in %s", count, nodeName, treeName);
            fprintf(outFile, "\n%d %s found in %s", count, nodeName, treeName);
        }
    }
}

//Handles all the queries
void queries(treeNameNode *root, FILE *inFile, FILE *outFile, int Q)
{
    for (int i = 0; i < Q; i++)
    {
        char query[MAXLEN];
        char treeName[MAXLEN];
        char nodeName[MAXLEN];
        int count;

        //look for query
        fscanf(inFile, "%s", query);

        if (strcmp(query, "search") == 0 || strcmp(query, "item_before") == 0)
            fscanf(inFile, "%s %s", treeName, nodeName);
        else if (strcmp(query, "height_balance") == 0 || strcmp(query, "count") == 0 )
            fscanf(inFile, "%s", treeName);

        //when asked do this
        if (strcmp(query, "search") == 0)
            search(root, treeName, nodeName, outFile);
        else if (strcmp(query, "item_before") == 0)
            item_before(root, treeName, nodeName, outFile);
        else if (strcmp(query, "height_balance") == 0)
            height_balance(root, treeName, outFile);
        else if (strcmp(query, "count") == 0)
            count_nodes(root, treeName, outFile);
    }
}
int main(void)
{

    int T, E, ST;
    FILE *inFile = fopen("in.txt", "r");
    FILE *outFile = fopen("out.txt", "w+");

    fscanf(inFile, "%d %d %d", &T, &E, &ST);

    treeNameNode *root = buildNameTree(inFile, T);
    populateTrees(inFile, root, E);
    displayInOrderNameTree(root, outFile);
    traverse_in_traverse(root, outFile);

    queries(root, inFile, outFile, ST);
    printf("\n");


    fclose(inFile);
    fclose(outFile);
}

void insertAfter(Node* prevNode, int newData)
{
    if(prevNode == NULL)
    {
        cout<<"the given previous node cannot be Null" << endl;
        return;
    }
    Node* newnode = new Node(); //new object
    newNode->data = newData; //insert new data
    newNode->next = prevNode->next; //update new nodes next
    prevNode->next = newNode; //update prevNodes next
    newNode->prev = prevNode; // set new nodes prev to prevNode

    if(newNode->next != NULL)
    {
        (newNode->next)->prev = newNode;
    }

}

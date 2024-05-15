#include <iostream>
using namespace std;

class MinHeap{
    int *harr; //pointer to array of elements in headp
    int capacity;
    int heapSize;

public:
    //constructors
    MinHeap(int capacity);

    void Heapify();

    int extractMin();

    void insertKey(int k);

    void percolateUp(int index);

    void percolateDown(int index);

    int minimum(int a, int indexa, int b, int indexb);

    void swap(int index1, int index2);

    MinHeap *initHeapfromArray(int *values, int length);

};

MinHeap *MinHeap::initHeapfromArray(int *values, int length)
{
    MinHeap *h = new MinHeap(length);
    for(int i=1; i<length; i++)
    {
        h->harr[i] = values[i-1];
    }
    h->heapSize = length;
    h->Heapify();
    return h;
}

void MinHeap::insertKey(int k) {
    if (heapSize==capacity)
    {
        cout<<"overflow";
        return;
    }
    heapSize++;
    int i = heapSize;
    harr[i] = k;
    percolateUp(i);
}

void MinHeap::percolateUp(int index){
        if(index >1 )
        {
         if(harr[index]/2 > harr[index])
         {
             swap(index,index/2);
             percolateUp(index/2);
         }

        }
}
void MinHeap::swap(int index1, int index2)
{
    int i = harr[index1];
    harr[index1] = harr[index2];
    harr[index2] = i;

}

void MinHeap::percolateDown(int index)
{
    int min;
    if((2* index + 1)<= heapSize)
    {
        min = minimum(harr[2*index], 2*index, harr[2*index+1], 2*index+1);
        if (harr[index] > harr[min])
        {
            swap(index,min);
            percolateDown(min);
        }
    }
    else if(2*index == heapSize)
    {
        if(harr[index] > harr(2*index))
        {
            swap(index, 2*index);
        }
    }
}

int MinHeap:: int minimum(int a, int indexa, int b, int indexb)
{
    if(a<b)
        return indexa;
    else
        return indexb;
}

void MinHeap::Heapify()
{
    int i;
    for(i=heapSize/2; i>0; i--)
    {

        percolateDown(i);
    }
}
int MinHeap::extractMin()
{
    int retVal;
    if(heapSize>0)
    {
        retVal = harr[1];
        harr[1]= harr[heapSize];
        heapSize--;
        percolateDown(1);
        return retVal;

    }
    else
        return -1;
}

void sort(int values[], int length)
{
    MinHeap* h = new MinHeap(length);
    h = h->initHeapfromArray(values, length);
    for (int i =0; i < length; i++)
    {
        values[i]= h->extractMin();
        cout<<" array["<<i <<"]:"
    }
}

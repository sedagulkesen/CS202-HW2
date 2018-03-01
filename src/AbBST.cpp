//
// Created by seda on 27/10/2017.
//

#include "AbBST.h"
#include "AbBinaryNode.h"

const int INITIAL_SIZE = 2;
AbBST::AbBST()
{

    binaryNode = new AbBinaryNode[INITIAL_SIZE];
    maxSize=INITIAL_SIZE;
    root=-1;
    free=0;

}

int AbBST::getHeight()
{

}
void AbBST::insert(int val)
{
    int parentIndex=searchHelper();
    int parentData=binaryNode[parentIndex].getItem();

    if (parentData==val)
    {
        return;
    }

    if(free<maxSize)
    {
        binaryNode[free].setItem(val);
    }
    else
    {
        copyFromOldToNew();
        binaryNode[free].setItem(val);
    }
    if (val<parentData)
    {
        binaryNode[parentIndex].setLeft(free);
    }
    else
    {
        binaryNode[parentIndex].setRight(free);
    }
    free++;

}
void copyOldToNew(){

    int newSize= 2*(maxSize);
    AbBinaryNode* newArr;
    newArr=new AbBinaryNode[newSize];

    for(int i=0;i<maxSize;i++)
    {

        newArr[i].setItem(binaryNode[i].getItem());
        newArr[i].setLeft(binaryNode[i].getLeft());
        newArr[i].setRight(binaryNode[i].getRight());
    }

    maxSize=newSize;
    delete [] binaryNode;
    binaryNode=NULL;
    binaryNode = newArr;
}
int AbBST::searchHelper(int val)
{
    int currentIndex=0;
    int data=binaryNode[currentIndex].getItem();

    while(true)
    {
        if (val==data)
        {
            return currentIndex;
        }

        else if(val<data)
        {
            int leftChild=binaryNode[currentIndex].getLeft();

            if(leftChild==-1)
            {

                return currentIndex;
            }

        }
        else
        {
            int rightChild=binaryNode[currentIndex].getRight();

            if(rightChild==-1)
            {
                return currentIndex;
            }
        }
    }
}


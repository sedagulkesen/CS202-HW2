//
// Created by seda on 26/10/2017.
//

#include "AbBinaryNode.h"
#include "AbBST.h"

#include <iostream>

using namespace std;


AbBinaryNode::AbBinaryNode()
{

    item=0;
    leftChild=-1;
    rightChild=-1;
}

AbBinaryNode::AbBinaryNode(const int& nodeItem,int left, int right)
{

    item=nodeItem;
    leftChild=left;
    rightChild=right;
}

void AbBinaryNode::setItem(int nodeItem)
{

    nodeItem=item;
}

void AbBinaryNode::setLeft(int left)
{

    left=leftChild;
}
void AbBinaryNode::setRight(int right)
{

    right=rightChild;
}

int AbBinaryNode::getItem()
{
    return item;

}

int AbBinaryNode::getLeft()
{

    return leftChild;
}

int AbBinaryNode::getRight()
{

    return rightChild;
}

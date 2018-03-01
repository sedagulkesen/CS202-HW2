//
// Created by seda on 27/10/2017.
//

#include "PbBinaryNode.h"
#include <iostream>

using namespace std;

PbBinaryNode::PbBinaryNode()
{
    leftChildPtr=NULL;
    rightChildPtr=NULL;
}

PbBinaryNode::PbBinaryNode(const int& nodeItem,int *left, int *right)
{
    nodeItem=item;
    left=leftChildPtr;
    right=rightChildPtr;
}
//getters and setters
void PbBinaryNode::setItem(const int& nodeItem)
{
    nodeItem=item;
}
int getItem(){
    return item;
}

PbBinaryNode* PbBinaryNode::getLeftChild()
{
    return leftChildPtr;
}
void PbBinaryNode::setLeftChild(PbBinaryNode* left)
{
    left=leftChildPtr;
}

PbBinaryNode* PbBinaryNode::getRightChild()
{
    return rightChildPtr;
}
void PbBinaryNode::setRightChild(PbBinaryNode* right)
{
    right=rightChildPtr;
}


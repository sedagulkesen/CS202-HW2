//
// Created by seda on 27/10/2017.
//

#include "PbBST.h"

PbBST::PbBST()
{
    root=NULL;
}
void PbBST::insert(int val)
{

    PbBinaryNode* newNode=new PbBinaryNode;
    PbBinaryNode* parent,current;

    newNode->getItem()=val;
    newNode->getLeftChildPtr()=NULL;
    newNode->getRightChild()=NULL;

    if(root==NULL){
        root=parent;
    }
    else
    {
        current=root;
        while(current){
            parent=current;
            if(newNode->getItem()>current->getItem())
                current=current->getRightChild();
            else
                current=current->getLeftChildPtr();
        }
        //decide whether newnode is in left or right subtree
        if(current.getItem()>parent->getItem())
            parent->getRightChild()=newNode;
        else
            parent->getLeftChild()=newNode;
    }
}

int PbBST::getHeight()
{
    if(root==NULL){
        return 0;
    }
    else{
        return 1+max(getHeight(root->getLeftChild()),getHeight(root->getRightChild()));
    }
}


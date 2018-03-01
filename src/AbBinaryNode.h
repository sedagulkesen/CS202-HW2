//
// Created by seda on 26/10/2017.
//

#ifndef HW2_ABBINARYNODE_H
#define HW2_ABBINARYNODE_H

#include "AbBST.h"

class AbBinaryNode {

private:
    int item;
    int leftChild;
    int rightChild;

public:

    AbBinaryNode();
    AbBinaryNode(const int& nodeItem,int left, int right);

    void setItem(int item);
    void setLeft(int left);
    void setRight(int right);

    int getItem();
    int getLeft();
    int getRight();

};


#endif //HW2_ABBINARYNODE_H

//
// Created by seda on 27/10/2017.
//

#ifndef HW2_ABBST_H
#define HW2_ABBST_H

#include "AbBinaryNode.h"
class AbBST {

public:

    AbBST();

    void insert(int val);
    int getHeight();

    //helper functions
    int searchHelper(int val, int index);
    void copyFromOldToNew();

private:

    int root;
    int free;
    int maxSize;
    AbBinaryNode* binaryNode;
};


#endif //HW2_ABBST_H

//
// Created by seda on 27/10/2017.
//

#ifndef HW2_PBBST_H
#define HW2_PBBST_H
#include "PbBinaryNode.h"

class PbBST {

private:
    PbBinaryNode* root;

public:

    PbBST();
    void insert(int val);
    int getHeight();
};


#endif //HW2_PBBST_H

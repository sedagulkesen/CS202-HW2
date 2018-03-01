//
// Created by seda on 27/10/2017.
//

#ifndef HW2_PBBINARYNODE_H
#define HW2_PBBINARYNODE_H


class PbBinaryNode {

private:

    int item;
    PbBinaryNode* leftChildPtr;
    PbBinaryNode* rightChildPtr;

public:

    PbBinaryNode();
    PbBinaryNode(const int& nodeItem,int *left, int *right);

    //getters and setters
    void setItem(const int& nodeItem);
    int getItem();

    PbBinaryNode* getLeftChild();
    void setLeftChild(PbBinaryNode* left);

    PbBinaryNode* getRightChild();
    void setRightChild(PbBinaryNode* right);


};


#endif //HW2_PBBINARYNODE_H

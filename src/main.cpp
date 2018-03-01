#include <iostream>
#include "Analysis.h"

using namespace std;

int main() {


    PbBST* yourTree=new PbBST();

    yourTree->insert(40);
    yourTree->insert(50);
    yourTree->insert(45);
    yourTree->insert(30);
    yourTree->insert(60);
    yourTree->insert(55);
    yourTree->insert(20);
    yourTree->insert(35);
    yourTree->insert(10);
    yourTree->insert(25);

    if(yourTree->isValidBST()==1)
    {
    cout<<"This is a valid BST"<<endl;
    }
    else
        cout<<"This is not a valid BST"<<endl;
    
    cout<<"The median is: "<<yourTree->medianOfBST()<<endl;
   
    Analysis *analysis = new Analysis;
    analysis->performanceAnalysis();
    analysis->heightAnalysis();


    return 0;



}

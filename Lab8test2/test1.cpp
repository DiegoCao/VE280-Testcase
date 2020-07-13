//
// Created by Dell on 2020/7/12.
//

#include "node.h"
#include <iostream>
using namespace std;

int main(){

    Node A=Node(1,1);
    A.addChild(1);
    A[0].addChild(3);

    Node B=Node(1,1);
    B.addChild(3);

    cout<<A.contain(&B)<<endl;
    cout<<B.contain(&B[0])<<endl;
    //check whether B contains its child
    
    return 0;
}
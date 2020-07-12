//
// Created by Dell on 2020/7/12.
//

#include "node.h"
#include <iostream>
using namespace std;
int main(){
    Node A=Node(1,3);
    A.addChild(3);
    A.addChild(0);
    A.addChild(1);
    Node B=Node(2,3);
    B.addChild(3);
    B.addChild(0);
    B.addChild(1);

    A.traverse();
    B.traverse();
    Node C=Node(3,4);
    C.traverse();
    C.addChild(3);
    C.addChild(0);
    C.addChild(1);
    C.addChild(5);
    C[0].addChild(3);
    C[0].addChild(0);
    C[0].addChild(1);
    cout<<B.contain(&C)<<endl;
    cout<<C.contain(&B)<<endl;

    cout<<A.contain(&B);
    cout<<B.contain(&A);

    return 0;
}


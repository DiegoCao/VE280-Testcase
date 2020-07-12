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
    Node B=Node(1,3);
    B.addChild(3);
    B.addChild(0);
    B.addChild(1);
    A.traverse();
    B.traverse();
    cout<<A.contain(&B);
    cout<<B.contain(&A);

    return 0;
}


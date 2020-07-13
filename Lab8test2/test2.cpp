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
    Node B=Node(1,2);
    B.addChild(3);
    B.addChild(0);
    A.getHeight();
    B.getHeight();
    cout<<"whether A contains B "<<A.contain(&B);
    cout<<"whether B contains A" <<B.contain(&A);

    return 0;
}


//
// Created by Dell on 2020/7/12.
//

#include "node.h"
#include <iostream>
using namespace std;
int main(){
    try{
        Node A=Node(1,3);
        A.addChild(3);
        A.addChild(0);
        A.addChild(1);
        A.addChild(4);

        // should throw too many child error

        Node B=Node(2,3);
        B.addChild(3);
        B.addChild(0);
        B.addChild(1);
        A.traverse();
        B.traverse();
        cout<<A.contain(&B);
        cout<<B.contain(&A);


    }
   catch (tooManyChildren a){
       cout<<"too many I die"<<endl;

   }
    return 0;
}


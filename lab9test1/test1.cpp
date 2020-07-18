//
// Created by Dell on 2020/7/18.
//

//
// Created by cyx on 20-6-12.
//

#include <iostream>
#include "mylist.h"

int main() {

    try{
        //the case that
        List<int> la, lb;
        la.insertBack(5);
        la.insertBack(4);
        la.insertBack(1);
        la.insertBack(0); // a = 0145

        lb.insertBack(2);
        lb.insertBack(4);
        lb.insertBack(1);
        lb.insertBack(3);

        //to determine 0:
        lb.removeFront(); // b = 314

        std::cout << isLarger(la, lb) << '\n';

        List<int> ab_sum(la);
        ab_sum.print();
        ab_sum = Add(la, lb);
        ab_sum.print();

    }
    catch(emptyList){
        std::cout << "Remove from empty list!\n";
    }

    return 0;
}


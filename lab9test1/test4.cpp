//
// Created by Dell on 2020/7/18.
//

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

        lb.insertBack(5);
        lb.insertBack(3);
        lb.insertBack(1);
        lb.print();
        lb.removeFront();
        lb.removeFront();
        lb.removeFront();
        lb.print();
        la=Add(la,lb);
        la.print();
        //to determine 0:
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


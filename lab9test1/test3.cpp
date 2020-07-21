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
        //the case that la is blank, lb is not blank
        la.insertBack(9);
        la.insertBack(9);
        la.insertBack(0);
        la.insertBack(9);

        lb.insertBack(0);
        lb=Add(la,lb);
        std::cout << isLarger(la, lb) << '\n';

        lb.print();
        la.print();
        lb.insertBack(9);
        List<int>lc(lb);
        std::cout << isLarger(la, lc) << '\n';
        
        //to determine 0:

        std::cout << isLarger(la, lb) << '\n';



    }
    catch(emptyList){
        std::cout << "Remove from empty list!\n";
    }

    return 0;
}


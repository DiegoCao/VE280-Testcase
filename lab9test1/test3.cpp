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


        lb.insertBack(0);
        lb.insertBack(0);
        lb.insertBack(0);
        lb.insertBack(0);

        //to determine 0:

        std::cout << isLarger(la, lb) << '\n';



    }
    catch(emptyList){
        std::cout << "Remove from empty list!\n";
    }

    return 0;
}


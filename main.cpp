#include <iostream>
#include "Array.h"
#include <array>

int main()
{
    Array<int, 5> myArray;
    myArray[0] = 4;
    myArray[1] = 5;
    myArray[2] = 42;
    myArray[3] = 13;
    myArray[4] = 7;
    auto iterator = myArray.begin();
    ++iterator;
    std::cout << *iterator << "\n";


    // auto theEnd = myArray.end();
    // for (auto it = myArray.begin(); it != theEnd; ++it)
    // {
    //     std::cout << *it << ", ";
    // }

    std::cout << "\n\n";

    for (auto& myElement : myArray)
        std::cout << myElement << ", ";

    std::cout << "\nHello, World!" << std::endl;
    return 0;
}

//
// Created by moroz on 14.11.2021.
//

#include <iostream>
#include <vector>


int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    for (auto i = v.begin(); i != v.end(); i+=2) {
        std::cout << *i << std::endl;
    }


}
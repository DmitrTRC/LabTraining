//
// Created by Dmitry Morozov on 10/10/21.
//

#include <iostream>
#include <vector>


void check_addr(std::vector<int> array1, const std::vector<int> & array2) {
    std::cout << "Array1 address in function check_addr() : " << &array1 << std::endl;
    std::cout << "Array2 address in function check_addr() : " << &array2 << std::endl;
}

int main() {
    std::vector<int> arr = {1,2,3,3,44,5,6,7,8,9};
    std::cout << "Array address in main function : " << &arr << std::endl;
    check_addr ( arr , arr);
}
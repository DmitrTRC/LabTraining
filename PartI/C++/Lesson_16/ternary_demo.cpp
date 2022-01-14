//
// Created by Dmitry Morozov on 14.01.2022.
//
#include <iostream>


 int max (const int &a, const int &b) {
    return a > b ? a : b;
}

int main () {
    int a = 10 ;
    int b = 20;
    int c = 30;

    std::cout << " Max Value is: " << max(10.5, max (a, b)) << std::endl;

    return 0;
}
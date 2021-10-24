//
// Created by Dmitry Morozov on 24/10/21.
//

#include <iostream>
#include <cmath>  // !

//using namespace std;

int main() {
    int number;
    int summa = 0; // !
    std::cin >> number;

    while (number != 0) {
        summa = summa + number % 10;
        number = number / 10;
    }
    std::cout << abs(summa);
}
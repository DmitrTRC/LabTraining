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

    while (number) {
        summa += number % 10;
        number /= 10;
    }
    std::cout << abs(summa);
}
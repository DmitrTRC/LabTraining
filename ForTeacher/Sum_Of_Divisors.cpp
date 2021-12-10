//
// Created by Dmitry Morozov on 10.12.2021.
//

#include <iostream>

int sum_of_divisors(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sum_of_divisors(n) << std::endl;
    return 0;
}

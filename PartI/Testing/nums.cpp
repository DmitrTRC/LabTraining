//
// Created by Dmitry Morozov on 03.01.2022.
//
#include <iostream>
#include <cassert>


int num_digits (long long n) {
    if (n < 0) {
        n = -n;
    }
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

void test_num_digits () {
    assert(num_digits (0) == 0);
    assert(num_digits (1) == 1);
    assert(num_digits (10) == 2);
    assert(num_digits (100) == 3);
    assert(num_digits (1000) == 4);
    assert(num_digits (10000) == 5);
    assert(num_digits (15323453) == 8);
    assert(num_digits (-1) == 1);
    assert(num_digits (-10) == 2);
    assert(num_digits (-100) == 3);
    assert(num_digits (-1000) == 4);
    assert(num_digits (100000000000000) == 15);

    std::cout << "All tests passed!" << " ✌️ " << std::endl;

}

int main () {
    test_num_digits ();
    return 0;
}
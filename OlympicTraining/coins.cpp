//
// Created by Dmitry Morozov on 28.12.2021.
//

/**
  COINS_X1_5

Vasya has N rubles in bills. He wants to exchange them for coins of 1, 4, 5 and 7 rubles. The machine, which does this,
 accepts bills at the entrance, and issues coins,
 and the smallest number of them. Write a program that receives one number at the input - the number of rubles,
 and outputs one number at the output - the minimum number of coins of these denominations for the specified amount.

Input data: amount of money
Output data: minimum amount of coins

Test pairs:

Input data: 14
Output data: 2

Input data: 34
Output data: 6

Входные данные: 1
Выходные данные: 1

Входные данные: 7
Выходные данные: 1

Входные данные: 8
Выходные данные: 2

Входные данные: 123
Выходные данные: 18

Входные данные: 547
Выходные данные: 79

Входные данные: 999
Выходные данные: 143
 **/

#include <iostream>
#include <vector>


int coins (int n) {
    int count = 0;
    count += n / 7;
    n %= 7;
    count += n / 5;
    n %= 5;
    count += n / 4;
    n %= 4;
    count += n / 1;
    return count;
}

int coins_arr ( int n,  std::vector<int> arr = {1, 4, 5, 7} ) {
    int count = 0;
    sort (arr.begin(), arr.end(), [](int a, int b) { return a > b; });
    for (auto  i : arr) {
        count += n / i;
        n %= i;
    }
    return count;
}


int change_to_coins (int n) {
    int count = 0;
    while (n > 0) {
        if (n >= 7) {
            n -= 7;
            count++;
        } else if (n >= 5) {
            n -= 5;
            count++;
        } else if (n >= 4) {
            n -= 4;
            count++;
        } else if (n >= 1) {
            n -= 1;
            count++;
        }
    }
    return count;
}

int change_to_coins_recurse (int n) {
    if (n == 0) {
        return 0;
    }
    if (n >= 7) {
        return 1 + change_to_coins_recurse (n - 7);
    }
    if (n >= 5) {
        return 1 + change_to_coins_recurse (n - 5);
    }
    if (n >= 4) {
        return 1 + change_to_coins_recurse (n - 4);
    }
    if (n >= 1) {
        return 1 + change_to_coins_recurse (n - 1);
    }
}

int main () {
    int n;
    std::cin >> n;
    std::cout << coins (n) << std::endl;
    std::cout << change_to_coins (n) << std::endl;
    std::cout << change_to_coins_recurse (n) << std::endl;
    std::cout << coins_arr (n) << std::endl;


    return 0;
}
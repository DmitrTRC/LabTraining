//
// Created by Dmitry Morozov on 28.12.2021.
//

/**
  №1. Монеты (х1.5)

У Васи есть N рублей купюрами. Он хочет разменять их на монеты по 1, 4, 5 и 7 рублей.

Автомат, который это делает, принимает на вход купюры, а выдает монеты, причем наименьшее их количество.

Напишите программу, которая на входе получает одно число — количество рублей, и выдает одно число на выходе — минимальное число монет данных номиналов на указанную сумму.

Входные данные: количество денег
Выходные данные: минимальное количество монет

Тестовые пары:

Входные данные: 14
Выходные данные: 2

Входные данные: 34
Выходные данные: 6

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
    while (n > 0) {
        if (n >= 7) {
            n -= 7; // n = n -7
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

int coins_by_divide (int n) {
    int count = 0;
    count += n / 7;
    n = n % 7;
    count += n / 5;
    n = n % 5;
    count += n / 4;
    n = n % 4;
    count += n / 1;
    n = n % 1;

    return count;

}


int coins_custom (int n, std::vector<int> arr = {1, 5, 4, 7}) {
    int count = 0;
    sort (arr.begin (), arr.end (), [] (int a, int b) { return a > b; });
    for (auto i: arr) {
        count += n / i;
        n %= i;
    }
    return count;
}


int main () {
    int n;
    std::cin >> n;
    std::cout << coins (n) << std::endl;
    std::cout << coins_by_divide (n) << std::endl;
    std::cout << coins_custom (n) << std::endl;
    std::cout << coins_custom (n, {1, 4, 5, 3, 7}) << std::endl;
    return 0;
}

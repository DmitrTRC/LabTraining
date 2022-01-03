//
// Created by Dmitry Morozov on 01.01.2022.
//

#include <cassert>
#include <iostream>


/*
 * №2. Страницы

Книга состоит из N страниц. Известно, что для записи всех номеров страниц этой книги было напечатано M символов.

Напишите программу, которая вычисляет N из M.

Входные данные: число символов для записи страниц книги
Выходные данные: количество страниц в книге

Тестовые пары:

Входные данные: 13
Выходные данные: 11

Входные данные: 25
Выходные данные: 17

Входные данные: 53
Выходные данные: 31

Входные данные: 1314
Выходные данные: 474

Входные данные: 10001
Выходные данные: 2777

Входные данные: 500505
Выходные данные: 101935
 */

int num_digits (int n) {
    int count = 0;
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        n /= 10;
        count++;
    }

    return count;
}

int get_total_pages_numbers (int total_pages_symbols) {
    int current_pages_symbols = 0;
    int current_pages_number = 0;
    if (total_pages_symbols) {

        while (current_pages_symbols < total_pages_symbols) {
            current_pages_symbols += num_digits (current_pages_number);
            current_pages_number++;
        }
        current_pages_number--;
    }
    return current_pages_number;
}

void test_get_total_pages () {
    assert(get_total_pages_numbers (13) == 11);
    assert(get_total_pages_numbers (25) == 17);
    assert(get_total_pages_numbers (53) == 31);
    assert(get_total_pages_numbers (1314) == 474);
    assert(get_total_pages_numbers (10001) == 2777);
    assert(get_total_pages_numbers (500505) == 101935);
    assert(get_total_pages_numbers (0) == 0);

    std::cout << "get_total_pages_numbers() tests passed" << "✌️" << std::endl; // Trying to use :smile:

}

void test_num_digits () {
    assert(num_digits (13) == 2);
    assert(num_digits (25) == 2);
    assert(num_digits (53) == 2);
    assert(num_digits (1314) == 4);
    assert(num_digits (10001) == 5);
    assert(num_digits (500505) == 6);
    assert(num_digits (0) == 0);
    assert(num_digits (-1) == 1);
    assert(num_digits (-10) == 2);
    assert(num_digits (-100) == 3);


    std::cout << "num_digits() tests passed" << "✌️" << std::endl; // Trying to use :smile:
}

int main () {
    test_num_digits ();
    test_get_total_pages ();
    return 0;
}
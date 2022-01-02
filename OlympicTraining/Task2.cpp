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

int num_digets (int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int get_total_pages_numbers (int total_pages_symbols) {
    int current_pages_symbols = 0;
    int current_pages_number = 0;

    while (current_pages_symbols < total_pages_symbols) {
        current_pages_symbols += num_digets (current_pages_number);
        current_pages_number++;
    }
    return current_pages_number-1;
}

void test_get_total_pages () {
    assert(get_total_pages_numbers (13) == 11);
    assert(get_total_pages_numbers (25) == 17);
    assert(get_total_pages_numbers (53) == 31);
    assert(get_total_pages_numbers (1314) == 474);
    assert(get_total_pages_numbers (10001) == 2777);
    assert(get_total_pages_numbers (500505) == 101935);
    std::cout << "All tests passed" <<std::endl; // Trying to use :smile:

}

int main () {
    test_get_total_pages ();
    return 0;
}
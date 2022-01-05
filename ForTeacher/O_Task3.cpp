//
// Created by Dmitry Morozov on 04.01.2022.
//

/*
 * №3. Максимум

Дана строка, в которой через пробел написаны натуральные числа. Напишите программу, которая выводит наибольшее отношение произведения трех чисел из данного ряда к их сумме (с точностью до 2 знаков после десятичной точки). Числа могут быть равны между собой математически, но должны стоять на разных местах в исходной строке.

Входные данные: строка чисел через пробел
Выходные данные: наибольшее отношение произведения из трех чисел к их сумме.

Тестовые пары:

Входные данные: 1 2 3 4
Выходные данные: 2.66 или 2.67

Входные данные: 5 12 1 50 9 5 2 11
Выходные данные: 90.41

Входные данные: 3 3 3
Выходные данные: 3, 3.0 или 3.00

Входные данные: 10 20 30 40 50 60 50 40 30 20 10
Выходные данные: 937.5 или 937.50

Входные данные: 99 98 97 98 50 31 99 98 97
Выходные данные: 3244.92 или 3244.93

Входные данные: 1 1 1 1 1 1 1 1 1 1 1
Выходные данные: 0.33
 */

#include <vector>
#include <string>
#include <iostream>
#include  <sstream>
#include <cassert>
#include <cmath>



//Round  to  2  digits
double round_to_2 (double value) {
    return round (value * 100) / 100;
}


// return  maximum   ( multiplication  three numbers / sum these numbers )  in the string
double max_relation (const std::string &str) {
    std::vector<double> numbers;
    std::stringstream ss (str);
    double number;
    while (ss >> number) {
        numbers.push_back (number);
    }
    assert(numbers.size () >= 3);
    double max_relation = 0;
    for (int i = 0; i < numbers.size () - 2; ++i) {
        for (int j = i + 1; j < numbers.size () - 1; ++j) {
            for (int k = j + 1; k < numbers.size (); ++k) {
                double relation = numbers[i] * numbers[j] * numbers[k] / (numbers[i] + numbers[j] + numbers[k]);
                if (relation > max_relation) {
                    max_relation = relation;
                }
            }
        }
    }

    return round_to_2 (max_relation);;
}

void Tests () {
    assert(max_relation ("1 2 3 4") == 2.66 || max_relation ("1 2 3 4") == 2.67);
    assert(max_relation ("5 12 1 50 9 5 2 11") == 90.41);
    assert(max_relation ("3 3 3") == 3.0 || max_relation ("3 3 3") == 3.00);
    assert(max_relation ("10 20 30 40 50 60 50 40 30 20 10") == 937.5 ||
           max_relation ("10 20 30 40 50 60 50 40 30 20 10") == 937.50);
    assert(max_relation ("99 98 97 98 50 31 99 98 97") == 3244.92 ||
           max_relation ("99 98 97 98 50 31 99 98 97") == 3244.93);
    assert(max_relation ("1 1 1 1 1 1 1 1 1 1 1") == 0.33);

    std::cout << "All tests Task 3 : passed 👍" << std::endl;

}

int main () {
    Tests ();
}

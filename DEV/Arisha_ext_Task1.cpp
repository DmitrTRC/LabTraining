//
// Created by Dmitry Morozov on 02.10.2021.
//


//Это твоя версия
#include <iostream>
#include <math.h> // Deprecated! Ты должна использовать <cmath>
#include <typeinfo>

using namespace std;

// Аришик, для тестирования конечно есть библиотеки и фреймворки, но мы напишем простую функцию для тестирования результата.
// Она будет просто подставлять результат в исходное уравнение


void CheckRoot(int a, int b, int c, double root) {
    auto EPSILON = 1e-6; // Формализуем предельно нужную точность.
    double result = a * (root * root) + b * root + c; // Считаем результат который должен стремиться к нулю.
    std::cout << std::endl << "For root = " << root << "  result = " << result << std::endl;

    if (abs(0 - result) < EPSILON) { // Укладываемся в точность ?
        std::cout << "Test Passed" << std::endl;
    } else { std::cout << " Test Failed" << std::endl; }

}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    std::cout << "Root Discriminant type : " << typeid(b * b - 4 * a * c).name() << " Value : " << b * b - 4 * a * c
              << std::endl;
    if (d > 0) {
        std::cout << "Root expression type : " << typeid((-b + sqrt(d)) / (2 * a)).name() << " Value : "
                  << (-b + sqrt(d)) / (2 * a) << std::endl;

        int x1 = (-b + sqrt(d)) / (2 * a); // Warning: Clang-Tidy: Narrowing conversion from 'double' to 'int' - Читай предупреждения.
        int x2 = (-b - sqrt(d)) / (2 * a); // Warning: Clang-Tidy: Narrowing conversion from 'double' to 'int' - Читай предупреждения.
        cout << "two solutions" << "\n" << x1 << "\n" << x2;

        // А вот теперь посчитаем проверку и подставим твой x1
        std::cout << std::endl << "Testing solution <Arina> " << std::endl;

        CheckRoot(a, b, c, x1);
        CheckRoot(a, b, c, x2);

        // А теперь то же самое , но с типом Double
        std::cout << std::endl << "Testing solution <Dmitry with double > " << std::endl;

        double x1_d = (-b + sqrt(d)) / (2 * a);
        double x2_d = (-b - sqrt(d)) / (2 * a);

        CheckRoot(a, b, c, x1_d);
        CheckRoot(a, b, c, x2_d);
    }
}

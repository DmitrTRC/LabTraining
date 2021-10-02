//
// Created by Dmitry Morozov on 02.10.2021.
//


//Это твоя версия
#include <iostream>
#include <math.h>
#include <typeinfo>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    std::cout << "Root Discriminant type : " << typeid(b * b - 4 * a * c).name() << " Value : " << b * b - 4 * a * c
              << std::endl;
    if (d > 0) {
        std::cout << "Root expression type : " << typeid((-b + sqrt(d)) / (2 * a)).name() << " Value : "
                  << (-b + sqrt(d)) / (2 * a) << std::endl;

        int x1 = (-b + sqrt(d)) / (2 * a);
        int x2 = (-b - sqrt(d)) / (2 * a);
        cout << "two solutions" << "\n" << x1 << "\n" << x2;

        // А вот теперь посчитаем проверку и подставим твой x1
        auto EPSILON = 1e-6; // Я думаю такой точности нам достаточно!

        cout << std::endl << "Testing x1 : " << a * (x1 * x1) + b * x1 + c << std::endl;

        double x1_d = (-b + sqrt(d)) / (2 * a);
        double res = a * (x1_d * x1_d) + b * x1_d + c;

        cout << "Testing with x1 as double, root is : " << res << std::endl;
        if (abs(0 - res) < EPSILON) {
            std::cout << "Test Passed" << std::endl;
        } else { std::cout << " Test Failed" << std::endl; }


    }
}

//
// Created by Dmitry Morozov on 09.10.2021.
//

#include <iostream>
#include <cmath>


//
//using namespace std;
//
//int main() {
//    double a, b, c;
//    cin >> a >> b >> c;
//    double d = b * b - 4 * a * c;
//    if (d > 0) {
//        double x1 = (-b + sqrt(d)) / (2 * a);
//        double x2 = (-b - sqrt(d)) / (2 * a);
//        cout << fixed << "two solutions" << "\n" << x1 << "\n" << x2;
//    }
//    if (d == 0) {
//        double x = -b / (2 * a);
//        cout << fixed << "one solution \n" << x;
//
//    }
//    if (d < 0) {
//        cout << "no solutions";
//    }
//}

int main() {
    int counter = 0;
    do {
        counter++;
        double result = sqrt(counter * counter) - sqrt(counter) * sqrt(counter);
        std::cout << "Counter : " << counter << std::endl;
        if (result != 0) {
            std::cout << "Failed ! Counter = " << counter << std::endl << "result = " << result << std::endl;
            break;
        }
    } while (counter < 1000000000);

    // Another example

    double a = (0.3 * 3) + 0.1;
    double b = 1;
    if (a == b) std::cout << "a == b , a = " << a << " , " << "b = " << b << std::endl;
    else std::cout << "a != b " << "a = " << a << "  b = " << b << std::endl;
}


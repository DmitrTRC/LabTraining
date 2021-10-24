//
// Created by Dmitry Morozov on 24.10.2021.
//

#include <cmath> //!!!
#include <iostream>

using namespace std; // !

int main() {
    int n;
    int suma = 0; // Check name!
    cin >> n;
    while (n) { // !
        suma += (n % 10); // !
        n /= 10; // !
    }
    cout << abs(suma);
}
//
// Created by moroz on 19.11.2021.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int converter(const string &s, int n) {
    cout << "Convert from string " << endl;

    auto number = stoi(s);
    int summa = 0;
    int k = 1;

    while (number) {
        summa += number % n * k;
        number = number / 10;

        k = k * n;
    }
    return summa;
}

int converter(int number, int n) {

    cout << "Convert from integer" << endl;
    int summa = 0;
    int k = 1;

    while (number) {
        summa += number % n * k;
        number = number / 10;

        k = k * n;
    }
    return summa;
}

int main() {
    string m;
    int n;
    cin >> m;
    cin >> n;

    cout << converter(m, n) << endl;

    int m2;
    cin >> m2;

    cout << converter(m2, n) << endl;

}
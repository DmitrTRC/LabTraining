//
// Created by Dmitry Morozov on 22/10/21.
//
#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a < 0 or b < 0 or c < 0) {
        cout << "NO";
        return 0;
    }

    if (a < b) swap(a, b);
    if (a < c)swap(a, c);
    if (a * a -  b * b + c * c )
        cout << "YES";
    else
        cout << "NO";
}
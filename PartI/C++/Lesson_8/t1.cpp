//
// Created by moroz on 13.11.2021.
//

#include <iostream>

using namespace std; //Bad !

#include <vector>
#include <algorithm>

int main() {
    vector<int> a;
    string m;
    int n;
    int suma = 0;
    cin >> m;
    cin >> n;
    int k = 1;
    //for (int i = m.size() - 1; i >= 0; --i) {  Warning type conversion
    for (size_t i = m.size() - 1; i >= 0; --i) { // Or use auto

        suma += (m[i] - '0') * k;
        k = k * n;

    }
    cout << suma;
}
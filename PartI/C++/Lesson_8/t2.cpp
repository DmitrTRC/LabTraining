//
// Created by moroz on 14.11.2021.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(const vector<int> &v) {
    for (const auto item: v) {
        cout << item;
    }
}

int main() {
    vector<int> a;
    int m;
    int n;

    cin >> m;
    cin >> n;

    if (!m) {
        cout << 0;
    } else {

        while (m) {
            a.push_back(m % n);
            m = m / n;
        }

        reverse(a.begin(), a.end());

        print_vector(a);
    }
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a;
    string m;
    int n;
    int summa = 0; //  int summa (0); int summa {0};
    cin >> m;
    cin >> n;
    int k = 1;

    for (size_t i = m.size(); i != 0; --i) {

        summa += (m[i - 1] - '0') * k;
        k = k * n;

    }

    cout << summa;
}
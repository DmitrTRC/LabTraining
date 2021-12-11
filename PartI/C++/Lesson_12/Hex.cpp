//
// Created by Dmitry Morozov on 03.12.2021.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#include <string>

int main() {
    //for (char i='A';i<='F';i++)
    //cout << "c[" << i << "] = " << int(i) - 'A' + 10 << "\n";

    string n;
    string ans;
    map<char, int> m;
    for (char i = '0'; i <= '9'; i++)
        m[i] = i - '0';
    for (char i = 'A'; i <= 'F'; i++)
        m[i] = i - 'A' + 10;
    cin >> n;
    for (int i = 0; i < n.size(); i++) {
        int num = m[n[i]];
        ans.push_back((num & 8) / 8 + '0');
        ans.push_back((num & 4) / 4 + '0');
        ans.push_back((num & 2) / 2 + '0');
        ans.push_back((num & 1) / 1 + '0');
    }
    while (ans.front() == '0' && ans.size() > 1)
        ans.erase(ans.begin());
    cout << ans;

}


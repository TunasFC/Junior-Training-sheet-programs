//
// Created by ivani on 24/Aug/2022.
//

#include <bits\stdc++.h>
using namespace std;
int main() {
    string s = "";
    cin >> s;
    char word;
    int cont = 0;
    vector<int> values;
    values.push_back(1);
    for (int i = 0; i < s.size(); i++) {
        word = s[i];
        values.push_back((int) word - 96);
    }
    for (int i = 0; i < s.size(); i++) {
        if (abs(values[i + 1] - values[i]) <= 13) {
            cont += abs(values[i + 1] - values[i]);

        } else {
            cont += 26 - abs(values[i + 1] - values[i]);

        }
    }
    cout << cont;

}

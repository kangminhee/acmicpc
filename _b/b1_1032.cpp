#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string * list = new string[n+1];
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    list[n] = list[0];

    for (int i = 0; i < list[0].length(); i++) {
        for (int j = 1; j < n; j++) {
            if (list[0][i] != list[j][i]) {
                list[n][i] = '?';
            }
        }
    }
    cout << list[n];
}
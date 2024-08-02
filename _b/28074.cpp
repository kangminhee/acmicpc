#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int a[5] = {}, res = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'M' && a[0] == 0) {
            a[0] = 1;
            res++;
        }
        if (s[i] == 'O' && a[1] == 0) {
            a[1] = 1;
            res++;
        }
        if (s[i] == 'B' && a[2] == 0) {
            a[2] = 1;
            res++;
        }
        if (s[i] == 'I' && a[3] == 0) {
            a[3] = 1;
            res++;
        }
        if (s[i] == 'S' && a[4] == 0) {
            a[4] = 1;
            res++;
        }
    }
    if (res == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
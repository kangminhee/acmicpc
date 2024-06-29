#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    cin >> input;
    string a = to_string(input);
    cin >> input;
    string b = to_string(input);

    int aa[10] = {}; int bb[10] = {}; int res[10] = {};

    int i, j;

    for (i = 9, j = a.length()-1; j >= 0; --i, --j) {
        if (a[j] >= '0' && a[j] <= '9') aa[i] = a[j]-48;
        else aa[i] = 0;
    }
    for (i = 9, j = b.length()-1; j >= 0; --i, --j) {
        if (b[j] >= '0' && b[j] <= '9') bb[i] = b[j]-48;
        else bb[i] = 0;
    }

    // for (i = 0; i < 10; i++) {
    //     cout << aa[i];
    // }
    // cout << "\n";
    // for (i = 0; i < 10; i++) {
    //     cout << bb[i];
    // }

    bool check = false;
    for (int i = 0; i < 10; i++) {
        res[i] = aa[i] + bb[i];
        if (res[i] != 0 && !check) check = true;
        if (check) cout << res[i];
    }
}

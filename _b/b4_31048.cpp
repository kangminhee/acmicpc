#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int res, input, tmp;
    for (int i = 0; i < n; i++) {
        cin >> input;
        tmp = 1;
        for (int i = input; i >= 2; --i) {
            tmp *= i;
            tmp %= 10;
        }
        cout << tmp << "\n";
    }
}
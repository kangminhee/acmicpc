#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, res = 0, tmp;
    cin >> n >> m;
    int money[n];
    for (int i = 0; i < n; i++) {
        cin >> money[i];
    }
    for (int i = n-1; i >= 0; --i) {
        tmp = m / money[i];
        res += tmp;
        m -= money[i]*tmp;
    }
    cout << res;
    return 0;
}
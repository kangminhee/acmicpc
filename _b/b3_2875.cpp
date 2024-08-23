#include <iostream>
using namespace std;

int main() {
    int n, m, k, res = 0, rest = 0; cin >> n >> m >> k;

    if (1.0 * n / m >= 2) {
        res = m;
        rest = n + m - 3 * res;
    } else {
        res = n / 2;
        rest = n + m - 3 * res;
    }

    if (rest >= k) cout << res;
    else {
        k -= rest;
        if (k % 3 > 0) cout << res - (k / 3 + 1);
        else cout << res - k / 3;
    }
    return 0;
}
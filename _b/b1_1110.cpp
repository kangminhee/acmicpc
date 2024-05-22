#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d, res = 0; cin >> n;
    if (n < 10) {
        n *= 10;
    }
    a = n / 10;
    b = n % 10;
    c = (a + b) % 10;
    d = b * 10 + c;
    res++;
    while (n != d) {
        a = d / 10;
        b = d % 10;
        c = (a + b) % 10;
        d = b * 10 + c;
        res++;
    }
    cout << res;
    return 0;
}
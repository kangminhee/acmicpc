#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, num=0, tmp, res = 0; cin >> n;
    char x;
    for (int i = n; i > 0; i--) {
        cin >> x;
        if (x == '1') {
            res ++;
        } else {
            continue;
        }
    }
    cout << res;
}
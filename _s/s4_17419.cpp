#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, num=0, tmp, res = 0; cin >> n;
    char x;
    for (int i = n; i > 0; i--) {
        cin >> x;
        if (x == '1') {
            tmp = 1;
            for (int j = 0; j < i-1; j++) {
                tmp *= 2;
            }
            num += tmp;
        } else {
            continue;
        }
    }
    while (num != 0) {
        num = num-(num&((~num)+1));
        res++;
    }
    cout << res;
}
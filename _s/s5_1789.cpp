#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tmp = 0; cin >> n;
    int i = 1;
    for (i = 1; tmp <= n; i++) {
        tmp += i;
    }
    cout << i-2;
    return 0;
}
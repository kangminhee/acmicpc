#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 1, l[1111];
    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j <= i; j++) {
            l[cnt] = i;
            cnt++;
        }
        if (cnt > 1000) break;
    }
    int n, m, res = 0; cin >> n >> m ;
    for (int i = n; i <= m; i++) {
        res += l[i];
    }
    cout << res;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w, h, l, res = 0; cin >> n >> w >> h >> l;
    res = (w/l)*(h/l);
    if (res < n) cout << res;
    else cout << n;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int l[1010] = {};
    long long res = 0; 
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    sort (l, l+n);
    for (int i = 0 ; i < n; i++) {
        res += (n-i) * l[i];
    }
    cout << res;
}
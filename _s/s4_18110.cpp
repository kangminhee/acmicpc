#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (n == 0) {cout << 0; return 0;}
    int l[1010101] = {}, sum = 0, mo = 0;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    sort(l, l+n);
    for (int i = floor(n*0.15+0.5); i < n-floor(n*0.15+0.5); i++) {
        sum += l[i];
        mo++;
    }
    cout << floor(1.0*sum/mo+0.5);
    return 0;
}
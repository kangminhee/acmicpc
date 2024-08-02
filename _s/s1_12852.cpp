#include <bits/stdc++.h>
using namespace std;

int l[1010101], ll[1010101];
void f(int x);

int main() {
    int x; cin >> x;

    ll[1]  = 1;
                               
    for (int i = 2; i <= x; i++) {
        l[i] = l[i-1] + 1;
        ll[i] = i - 1;
        if (!(i%3)) {
            if (l[i] > l[i/3] + 1) {
                l[i] = l[i/3] + 1;
                ll[i] = i / 3;
            }
        }
        if (!(i%2)) {
            if (l[i] > l[i/2] + 1) {
                l[i] = l[i/2] + 1;
                ll[i] = i / 2;
            }
        }
    }
    cout << l[x] << "\n" << x << " ";

    while (x != 1) {
        x = ll[x];
        cout << x << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int l[10];
    for (int i = 0; i < n; i++) {
        for (int t = 0; t < 10; t++) {
            cin >> l[t];
        }
        sort(l, l+10);
        cout << l[7] << endl;
    }
}
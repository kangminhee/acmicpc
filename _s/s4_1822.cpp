#include <bits/stdc++.h>
using namespace std;

int a[501010], b[501010];

int main() {
    int na, nb, var; cin >> na >> nb;
    var = na;
    for (int i = 0; i < na; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < nb; i++) {
        cin >> b[i];
    }
    sort(a, a+na); sort(b, b+nb);

    int i = 0, j = 0;
    for (i = 0, j = 0; i < na; ++i) {
        while (a[i] > b[j] && j < nb) ++j;
        if (a[i] == b[j]) {a[i] = -1; --var;}
    }
    if (!var) {cout << 0; return 0;}
    cout << var << "\n";
    for (i = 0; i < na; ++i) {
        if (a[i] != -1) cout << a[i] << " ";
    }
    return 0;
}
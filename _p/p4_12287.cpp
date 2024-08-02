#include <bits/stdc++.h>
using namespace std;

int n; string s;
int G[101][101], C[101], P[101];

int ff(int var) {
    if (var == n) return 1;

    for (int i = 0; i < n; i++) {
        if (!C[i] && (var == 0 || G[P[var - 1]][i] == 1)) {
            P[var] = i;
            C[i] = 1;

            if (ff(var + 1)) return 1;

            C[i] = 0;
        }
    }
    return 0;
}

int f() {
    for (int i = 0; i < n; i++) {
        P[0] = i;
        C[i] = 1;
        if (ff(1)) return 1;
        C[i] = 0;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '+') G[i][j] = 1;
            else G[i][j] = 0;
        }
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) cout << G[i][j] << " ";
    //     cout << "\n";
    // }

    if (f()) {
        for (int i = 0; i < n; i++) cout << P[i] << " ";
    } else cout << -1;

    return 0;
}
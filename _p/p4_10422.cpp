#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1e9 + 7;

int T, L;
ll D[5001];

ll f(int l) {
    if (l == 0) return 1;
    if (D[l] > 0) return D[l];
    for (int i = 2; i <= l; i += 2) {
        D[l] += (f(i - 2) * f(l - i));
        D[l] %= MOD;
    }

    return D[l];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, L; cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> L;
        if (L % 2) {cout << "0\n"; continue;}
        cout << f(L) << "\n";
    }

    return 0;
}
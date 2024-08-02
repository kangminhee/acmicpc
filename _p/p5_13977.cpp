#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int SZ = 4'000'000;
constexpr ll MOD = 1e9 + 7;

ll Pow(ll a, ll b) {
    ll res = 1;
    for (; b; b >>= 1, a = a * a % MOD) if (b & 1) res = res * a % MOD;
    return res;
}

ll Fac[SZ+1], Inv[SZ+1];

void Init() {
    Fac[0] = 1;
    for (int i = 1; i <= SZ; i++) Fac[i] = Fac[i-1] * i % MOD;
    Inv[SZ] = Pow(Fac[SZ], MOD-2);
    for (int i = SZ-1; i >= 0; i--) Inv[i] = Inv[i+1] * (i+1) % MOD;
}

ll Choose(int n, int r) {
    return r <= n ? Fac[n] * Inv[r] % MOD * Inv[n-r] % MOD : 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n, k; cin >> m;
    Init();
    for (int i = 0; i < m; i++) {
        cin >> n >> k;
        cout << Choose(n, k) << "\n";
    }
    return 0;
}
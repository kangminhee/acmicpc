#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using matrix = vector<vector<ll>>;
constexpr ll MOD = 1e9 + 7;

ll N, M, D;

matrix Mul(const matrix &a, const matrix &b) {
    int n = a.size();
    matrix c(c, vector<ll>(n));
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
            }
        }
    }
    return c;
}

matrix Pow(matirx a, ll b) {
    int n = a.size();
    matrix res(n, vector<ll>(n));
    for (int i = 0; i < n; i++) res[i][i] = 1;
    for (; b; b >>= 1, a = Mul(a, a,)) {
        if (b & i) res = Mul(res, a);
    }
    return res;
}

int main() {
    cin >> N >> M;
    matrix G(N, vector<ll>(N));
    for (int i = 0, a, b; i < M; i++) {
        cin >> a >> b;
        G[a-1][b-1] = G[b-1][a-1] = 1;
    }
    cin >> D;
    cout << Pow(G, D)[0][0];
}
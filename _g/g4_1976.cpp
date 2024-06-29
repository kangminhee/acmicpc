#include <bits/stdc++.h>
using namespace std;

int A[1010], P[222];
int Find(int v) { return v==P[v] ? v : P[v] = Find(P[v]); }
void Merge(int u, int v) {if (Find(u) != Find(v)) P[Find(u)] = Find(v);}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    iota(P+1, P+n+1, 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int t; cin >> t;
            if (t) Merge(i, j);
        }
    }
    for (int i = 1; i <= m; i++) cin >> A[i];

    bool res = true;
    for (int i = 2; i <= m; i++) res &= Find(A[i-1]) == Find(A[i]);
    cout << (res ? "YES" : "NO");

}
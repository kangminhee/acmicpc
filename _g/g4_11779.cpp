#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> G[1010];
int D[1010], C[1010], P[1010];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

int main() {
    int n, m; cin >> n >> m;
    int u, v, w, s, e;
    for (int i = 0; i < m; ++i) {
        cin >> u >> v >> w;
        G[u].push_back(make_pair(v, w));
    }
    cin >> s >> e;

    for (int i = 1; i <= n; ++i) D[i] = 1e9;

    D[s] = 0;
    pq.emplace(0, s);

    while (!pq.empty()) {
        auto [c, v] = pq.top(); pq.pop();
        if (C[v]) continue; C[v] = 1;
        for (auto [i, w] : G[v]) {
            if (D[i] > D[v] + w) {
                D[i] = D[v] + w;
                P[i] = v;
                pq.emplace(D[i], i);
            }
        }
    }

    vector<int> V;
    for (int i = e; i; i = P[i]) V.push_back(i);
    reverse(V.begin(), V.end());
    cout << D[e] << "\n" << V.size() << "\n";
    for (auto i : V) cout << i << " ";

    return 0;
}
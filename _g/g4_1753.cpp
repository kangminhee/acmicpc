#include <bits/stdc++.h>
using namespace std;

int C[20101], D[20101];
vector<pair<int, int>> G[20101];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

int main() {
    int n, e, k; cin >> n >> e >> k;
    int uu, vv, ww;

    for (int i = 1; i <= n; ++i) D[i] = 1e9;
    D[k] = 0;
    pq.emplace(0, k);

    for (int i = 0; i < e; ++i) {
        cin >> uu >> vv >> ww;
        G[uu].push_back(make_pair(vv, ww));
    }

    while (!pq.empty()) {
        auto [c, v] = pq.top(); pq.pop();
        if (C[v]) continue; C[v] = 1;
        for (auto [i, w] : G[v]) {
            if (D[i] > D[v] + w) {
                D[i] = D[v] + w;
                pq.emplace(D[i], i);
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (D[i] == 1e9) cout << "INF\n";
        else cout << D[i] << "\n";
    }


}
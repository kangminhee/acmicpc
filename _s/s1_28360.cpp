#include <bits/stdc++.h>
using namespace std;

int graph[51][51];
double water[51];

int main() {
    int n, m, v, w; double max = 0; cin >> n >> m;
    water[1] = 100;
    queue<int> leaves;
    for (int i = 0; i < m; ++i) {
        cin >> v >> w;
        graph[v][w] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (!water[i]) continue;
        queue<int> q;
        int k = 0;
        for (int j = i+1; j <= n; ++j) {
            if (graph[i][j] == 1) {
                ++k;
                q.push(j);
            }
        }
        if (k == 0) leaves.push(i);
        while (!q.empty()) {
            water[q.front()] += 1.0*water[i]/k;
            q.pop();
        }
    }
    while (!leaves.empty()) {
        if (water[leaves.front()] > max) max = water[leaves.front()];
        leaves.pop();
    }
    cout << fixed << setprecision(10) << max;
    // for (int i = 1; i <= n; ++i) {
    //     cout << water[i] << " ";
    // }
    return 0;
}
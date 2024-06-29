#include <bits/stdc++.h>
using namespace std;

#define MAX 1010
int n, m, v, c1[MAX], res;
bool graph[MAX][MAX];

void DFS(int v) {
    // cout << v << " ";
    c1[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (graph[v][i] && !c1[i]) DFS(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m ; i++) {
        cin >> u >> v;
        graph[u][v] = graph[v][u] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (!c1[i]) {
            DFS(i);
            res++;
        }
    }
    cout << res;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define MAX 1010
int n, m, v, c1[MAX], c2[MAX];
bool graph[MAX][MAX];

void DFS(int v) {
    cout << v << " ";
    c1[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (graph[v][i] && !c1[i]) DFS(i);
    }
}

void BFS(int v) {
    queue<int> q;
    q.push(v); c2[v] = 1;
    while (!q.empty()) {
        v = q.front(); q.pop();
        cout << v << " ";
        for (int i = 1; i <= n; i++) {
            if (graph[v][i] && !c2[i]) {
                q.push(i);
                c2[i] = 1;
            }
        }
    }
}

int main() {
    cin >> n >> m >> v;
    int s, e;
    stack<int> process;
    for (int i = 0; i < m; i++) {
        cin >> s >> e;
        graph[s][e] = graph[e][s] = 1;
    }
    
    DFS(v);
    cout << "\n";
    
    BFS(v);
    return 0;
}
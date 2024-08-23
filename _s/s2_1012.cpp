#include <bits/stdc++.h>
using namespace std;

int t, n, m, k, x, y;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int solve() {
    int res = 0, G[51][51] = {}, C[51][51] = {};
    queue<pair<int, int>> Q;
    cin >> n >> m >> k;

    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        G[x][y] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (G[i][j] == 0) continue;
            if (C[i][j] != 0) continue;

            C[i][j] = 1;
            Q.push({i, j});
            res++;

            while (Q.size()) {
                x = Q.front().first;
                y = Q.front().second;
                Q.pop();

                for (int ii = 0; ii < 4; ii++) {
                    int xx = x + dx[ii];
                    int yy = y + dy[ii];

                    if (xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
                    if (G[xx][yy] == 0) continue;
                    if (C[xx][yy] != 0) continue;
                    C[xx][yy] = 1;
                    Q.push({xx, yy});
                }
            }
        }
    }
    return res;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++) {
        cout << solve() << "\n";
    }
}
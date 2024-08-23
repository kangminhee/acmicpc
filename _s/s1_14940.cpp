#include <bits/stdc++.h>
using namespace std;

int n, m, G[1010][1010], C[1010][1010], x, y, input;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int sx, int sy) {
    queue<pair<int, int>> Q;
    Q.push({sx, sy});
    C[sx][sy] = 1;
    while (Q.size()) {
        x = Q.front().first;
        y = Q.front().second;

        Q.pop();

        for (int i = 0; i < 4; i++) {
            int xx = x + dx[i];
            int yy = y + dy[i];

            if (xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
            if (G[xx][yy] == 0) continue;
            if (C[xx][yy] != 0) continue;
            C[xx][yy] = C[x][y] + 1;
            Q.push({xx, yy});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;

    int input;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> input;
            G[i][j] = input;
            if (input == 2) {
                x = i; y = j;
            }
        }
    }

    bfs(x, y);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (G[i][j] == 0) cout << "0 ";
            else cout << C[i][j] - 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
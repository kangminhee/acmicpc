#include <bits/stdc++.h>
using namespace std;

int n, m;
int G[1010][1010], C[1010][1010];
int si, sj;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    C[x][y] = 1;
    while (!q.empty()) {
        int X = q.front().first;
        int Y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int dix = X + dx[i];
            int diy = Y + dy[i];
        }

        if (dix >= 0 && dix < n && diy >= 0 && diy < m) {
            if (C[dix][diy] == 0 && G[dix][diy] != 0) {
                C[dix][diy] = C[X][Y] + 1;
                q.push({dix, diy});
            }
        }
    }
}

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    int in;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> in;
            if (in == 2) {
                si = i; sj = j;
            }
            G[i][j] = in;
        }
    }

    bfs(si, sj);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
}
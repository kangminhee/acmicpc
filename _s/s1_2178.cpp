#include <bits/stdc++.h>
using namespace std;

int n, m, G[101][101], C[101][101], x, y;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++) {
            G[i][j] = input[j] - '0';
        }
    }
    queue<pair<int, int>> Q;
    C[0][0] = 1;
    Q.push({0,0});
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
    cout << C[n-1][m-1]<< "\n";
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < m; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
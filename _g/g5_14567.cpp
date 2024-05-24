#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    bool graph[1010][1010] = {};
    int list[1010] = {}, check[1010] = {}, res[1010] = {};
    int pre, post;
    queue<int> thistime;
    for (int i = 0; i < m; i++) {
        cin >> pre >> post;
        graph[post][pre] = 1;
        ++list[post];
    }
    for (int time = 1; time <= n; time++) {
        for (int i = 1; i <= n; i++) {
            if (list[i] == -1) continue;
            if (list[i] == 0 && check[i] == 0) {
                thistime.push(i);
            }
        }
        while (!thistime.empty()) {
            int where = thistime.front();
            thistime.pop();
            // cout << where << ":";
            check[where] = 1;
                res[where] = time;
                for (int j = 1; j <= n; j++) {
                    if (graph[j][where]) {
                        --list[j];
                        graph[j][where] = 0;
                    }
                }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}

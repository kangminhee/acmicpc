#include <bits/stdc++.h>
using namespace std;

int main() {
    short n, m; cin >> n >> m;
    bool graph[32002][32002] = {};
    short list[32002] = {};//, check[32002] = {};
    queue<short> q;
    short shorter, taller;
    for (int i = 0; i < m; i++) {
        cin >> shorter >> taller;
        graph[taller][shorter] = 1;
        ++list[taller];
    }
    while (m--) {
        for (int i = 1; i <= n; i++) {
            if (!list[i]/*&& !check[i]*/) {
                q.push(i);
                // check[i] = 1;
                for (int j = 1; j <= n; j++) {
                    if (graph[j][i]) {
                        graph[j][i] = 0;
                        --list[j];
                    }
                }
            }        
        }
    }
    for (int i = 0; i < n; i++) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
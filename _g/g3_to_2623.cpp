#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int pre, post, tmp;

    // graph 만들기
    bool graph [1010][1010] = {};
    int list [1010] = {};
    bool check[1010] = {};
    queue<int> q;
    for (int i = 0; i < m; i++) {
        int k; cin >> k;
        pre = post = 0;
        for (int j = 0; j < k; j++) {
            cin >> tmp;
            if (post == 0) post = tmp;
            else {
                pre = post;
                post = tmp;
            }
            if (pre && post) {
                graph[post][pre] = 1;
                ++list[post] ;
            }
        }
    }

    // 불가능한 케이스 구하기
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((graph[i][j] && graph[j][i]) && i != j) {
                cout << 0;
                return 0;
            }
        }
    }
    // 순서 구하기
    while (q.size() < n) {
        for (int i = 1; i <= n; i++) {
            if (!list[i] && !check[i]) {
                q.push(i);
                check[i] = 1;
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
        cout << q.front() << "\n";
        q.pop();
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, res; cin >> n;
    deque<int> q;
    q.clear();
    for (int i = 1; i <= n; ++i) {
        q.push_back(i);
    }
    while (q.size() > 1) {
        cout << q.front() << " ";
        q.pop_front();
        q.push_back(q.front());
        q.pop_front();
    }
    cout << q.front();
    return 0;
}

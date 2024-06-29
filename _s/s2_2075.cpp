#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    int n2 = n*n;
    for (int i = 1; i <= n2; ++i) {
        int t; cin >> t;
        pq.push(t);
        if (pq.size() > n) pq.pop();
    }
    cout << pq.top();
}
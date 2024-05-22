#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int in[n], out[n];
    for (int i = 0; i < n; i++) {
        cin >> in[i];
    }
    stack<int> s;
    for (int i = n-1; i >= 0; i--) {
        while (!s.empty() && s.top() <= in[i]) {
            s.pop();
        }
        if (s.empty()) out[i] = -1;
        else out[i] = s.top();
        s.push(in[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << out[i] << " ";
    }
}
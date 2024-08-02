#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void f(int n) {
    ll in[101010], L[101010] = {}, R[101010] = {}, res[101010] = {};
    stack<ll> s, num;
    for (int i = 0; i < n; i++) {
        cin >> in[i];
    }
    //L
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && s.top() >= in[i]) {
            s.pop();
            num.pop();
        }
        if (s.empty()) L[i] = 0;
        else L[i] = num.top() + 1;
        s.push(in[i]); num.push(i);
    }

    while (!s.empty()) s.pop();
    while (!num.empty()) num.pop();

    //R
    for (int i = n-1; i >= 0; --i) {
        while (!s.empty() && s.top() >= in[i]) {
            s.pop();
            num.pop();
        }
        if (s.empty()) R[i] = n-1;
        else R[i] = num.top() - 1;
        s.push(in[i]); num.push(i);
    }
    ll maximum=0;
    for (int i = 0; i < n; i++) {
        res[i] = (R[i]-L[i]+1) * in[i];
        maximum = max(maximum, res[i]);
    }

    cout << maximum << "\n";
    return;
}

int main() {
    
    ios::sync_with_stdio(false);
	cin.tie(0);
	
    while (1) {
        int n; cin >> n;
        if (n == 0) return 0;
        else f(n);
    }
    
    return 0;
}
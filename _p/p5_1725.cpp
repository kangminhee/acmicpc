#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int in[n], L[n] = {}, R[n] = {}, res[n] = {};
    stack<int> s, num;
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
    int maximum=0;
    for (int i = 0; i < n; i++) {
        res[i] = (R[i]-L[i]+1) * in[i];
        maximum = max(maximum, res[i]);
    }

    cout << maximum;

    // //for test
    // for (int i = 0; i < n; i++) {
    //     cout << i << " ";
    // }cout << endl<< endl;
    // for (int i = 0; i < n; i++) {
    //     cout << in[i] << " ";
    // }cout << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << L[i] << " ";
    // } cout << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << R[i] << " ";
    // }cout << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << res[i] << " ";
    // }cout << endl;
}
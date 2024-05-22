#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int in[n] = {};
    int dp[n]; int dpdp[n] = {};
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }
    for (int i = 0 ; i < n; i++) {
        int tmp; cin >> tmp;
        in[i] = tmp;
        for (int j = 0; j < i; j++) {
            if (in[j] < in[i] && in[j] > dpdp[i]) {
                dp[i] += 1;
                dpdp[i] = in[j];
            }
        }
    }
    sort(dp, dp+n);
    // for (int i = 0; i < n; i++) {
    //     cout << dp[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << dpdp[i] << " ";
    // }
    cout << dp[n-1];
}
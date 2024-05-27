#include <bits/stdc++.h>
using namespace std;

# define MAX 101010
int arr[MAX], dp[MAX];

int main() {
    int n, res=0; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    res = dp[1] = arr[1];
    for (int i = 1; i <= n; i++) {
        dp[i] = max(dp[i-1]+arr[i], arr[i]);
        res = max(dp[i], res);
    }
    cout << res;
    return 0;
}
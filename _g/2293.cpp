#include <bits/stdc++.h>
using namespace std;

int n, k, A[111], D[10101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> A[i];
    for (int i = 0; i < 10101; i++) D[i] = 1e9;
    D[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j-A[i] >= 0) D[j] = min(D[j-A[i]]+1, D[j]);
        }
    }
    cout << (D[k] < 1e9 ? D[k] : -1);
}
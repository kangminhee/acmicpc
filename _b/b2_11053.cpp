#include <bits/stdc++.h>
using namespace std;

int n, A[1010], D[1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++) {
        D[i] = 1;
        for (int j = 1; j < i; j++) {
            if (A[j] < A[i]) D[i] = max(D[i], D[j] + 1);
        }
    }
    int r = 0;
    for (int i = 1; i <= n; i++) {
        r = max(r, D[i]);
    }
    cout << r;
}
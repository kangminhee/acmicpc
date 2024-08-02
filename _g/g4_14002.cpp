#include <bits/stdc++.h>
using namespace std;

int res, tmp, idx, N, A[1010101], D[1010101];
deque<int> Q;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) {
        D[i] = 1;
        for (int j = 1; j < i; j++) {
            if (A[j] < A[i]) D[i] = max(D[i], D[j] + 1);
        }
        if (D[i] > res) {
            res = D[i]; idx = i;
        }
    }

    Q.push_back(A[idx]); tmp = res - 1;
    for (int i = idx - 1; i > 0; i--) {
        if (D[i] == tmp && A[i] < Q.back()) {
            tmp--;
            Q.push_back(A[i]);
        }
    }
    cout << res << "\n";
    while (Q.size()) {
        cout << Q.back() << " ";
        Q.pop_back();
    }
    return 0;
}
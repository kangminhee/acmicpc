#include <bits/stdc++.h>
using namespace std;

int n, m, D[1010][1010];
string A, B;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    cin >> A >> B;
    n = A.size(); m = B.size();
    A = "#" + A; B = "#"+ B;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (A[i] == B[j]) D[i][j] = D[i-1][j-1]+1;
            else D[i][j] = max(D[i-1][j], D[i][j-1]);
        }
    }
    cout << D[n][m];
}
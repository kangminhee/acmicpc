#include <iostream>
using namespace std;

int C[1010][1010], M = 10'007;

int main() {
    int n, k;
    cin >> n >> k;

    C[0][0] = 1;
    for (int i =1; i<=n; i++) {
        C[i][0] = 1;
        for (int j=1; j<=i; j++) {
            C[i][j] = (C[i-1][j] + C[i-1][j-1]) % M;
        }
    }
    cout << C[n][k];
    return 0;
}
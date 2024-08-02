#include <bits/stdc++.h>
using namespace std;

int N, K, W[101], V[101], DP[101][101010];

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> W[i] >> V[i];

    for (int i = 1; i <= K; i++) { // i <= 100,000
        for (int j = 1; j <= N; j++) { // j <= 100
            if (W[j] > i) DP[j][i] = DP[j-1][i];
            else DP[j][i] = max(DP[j-1][i - W[j]] + V[j], DP[j-1][i]);
        }
    }
    
    cout << DP[N][K];
    
    return 0;
}
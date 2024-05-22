#include <iostream>

using namespace std;

int main() {
    int n, k, res = 1;
    cin >> n >> k;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    for (int i = 2; i <= n-k; i++) {
        res /= i;
    }
    for (int i = 2; i <= k; i++) {
        res /= i;
    }
    cout << res;
}
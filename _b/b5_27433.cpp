#include <iostream>

using namespace std;

int main() {
    int n;
    long long int res = 1;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    cout << res;
    return 0;
}
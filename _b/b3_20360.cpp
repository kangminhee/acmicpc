#include <iostream>
using namespace std;

int main() {
    int n, i = 0; cin >> n;
    int l[32] = {};
    while (n != 0) {
        l[i++] = n % 2;
        n /= 2;
    }
    for (int k = 0; k < i; k++) {
        if (l[k] == 1) cout << k << " ";
    }
    return 0;
}
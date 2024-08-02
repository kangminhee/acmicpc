#include <bits/stdc++.h>
using namespace std;

int n, arr[201010];

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int hmm(int l, int r) {
    int tmp = 0;
    for (int i = l; i <= r; i++) tmp = gcd(tmp, arr[i]);
    return tmp;
}

int f(int l, int r) {
    if (l == r) return arr[l];
    if (l + 1 == r) return arr[l] + arr[r];
    
    int i = f(l, (l+r-1)/2) + hmm((l+r-1)/2+1, r);
    int j = f((l+r-1)/2+1, r) + hmm(l, (l+r-1)/2);
    return max(i, j);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (n == 1) {
        cout << arr[0];
        return 0;
    }

    cout << f(0, n-1);
    return 0;
}
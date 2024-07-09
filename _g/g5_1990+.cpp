#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    if (n == 2) return 1;
    if (n <= 1 || n % 2 == 0) return 0;
    for (int i = 3; i*i <= n; i+=2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isPelindrome (int n) {
    string s = to_string(n);
    int len = s.length();
    for (int i = 0, j = len-1; i <= j; i++, j--) {
        if (s[i] != s[j]) return 0;
    }
    return 1;
}

int main() {
    int a, b, tmp; cin >> a >> b;

    if (a % 2 == 0) {
        if (isPrime(a) && isPelindrome(a)) cout << a << "\n";
        a++;
    }
    for (int i = a; i <= b; i += 2) {
        if (isPrime(i) && isPelindrome(i)) cout << i << "\n";
    }

    cout << -1;
    return 0;
}
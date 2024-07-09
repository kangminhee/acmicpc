#include <bits/stdc++.h>
using namespace std;

int c[101010101];
deque<int> Primes;

void f(int n) {
    for (int i = 2; i <= n; i++) {
        if (c[i]) continue;
        Primes.push_back(i);
        for (int j = i; j <= n; j += i) {
            c[j] = 1;
        }
    }
}

int isPrime(int n) {
    if (n == 2) return 1;
    if (n <= 1 || n % 2 == 0) return 0;
    for (int i = 3; i+i <= n; i+=2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isPelindrome(int n) {
    string s = to_string(n);
    int len = s.length();
    for (int i = 0, j = len-1; i <= j; i++, j--) {
        if (s[i] != s[j]) return 0;
    }
    return 1;
}

int main() {
    int a, b, tmp; cin >> a >> b;

    // f(b);

    // while (Primes.size() > 0) {
    //     tmp = Primes.front(); Primes.pop_front();
    //     if (tmp < a) continue;
    //     if (isPelindrome(tmp)) cout << tmp << "\n";
    // }



    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isPelindrome(i)) cout << i << "\n";
    }
    cout << -1;
    return 0;
}
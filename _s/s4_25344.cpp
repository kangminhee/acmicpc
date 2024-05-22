#include <iostream>
using namespace std;

int gcdf(int a, int b) {
    if (a%b != 0) {
        return gcdf(b, a%b);
    } else {
        return b;
    }
}

int main() {
    int n, time[101010] = {}, gcdlist[101010] = {}, gcd;
    long long lcm = 1;
    cin >> n;
    for (int i = 1; i <= n-2; i++) {
        cin >> time[i];
        gcdlist[i] = time[i];
        lcm *= time[i];
    }
    for (int i = 1; i <= n; i++) {
        int a = gcdlist[i-1];
        int b = time[i];
        if (b>a) {
            int tmp = b;
            b = a;
            a = tmp;
        }
        gcd = gcdf(a, b);
        cout << gcd <<" ";
    }
    cout << gcd;
    return 0;
}
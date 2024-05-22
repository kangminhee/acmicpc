#include <iostream>
using namespace std;

long long Add(long long a, long long b, long long c) {
    return (a+b)%c;
}

long long Mul(long long a, long long b, long long c) {
    long long res = 0;
    while (b>0) {
        if (b%2==1) res = Add(res, a, c);
        b /= 2; a = Add(a, a, c);
    }
    return res;
}

long long Pow (long long a, long long b, long long c) {
    long long res = 1;
    while (b > 0) {
        if (b % 2 == 1) res = Mul(res, a, c);
        b /= 2; a = Mul(a, a, c);
    }
    return res;
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    cout << Pow(a, b, c) << endl;

    return 0;
}

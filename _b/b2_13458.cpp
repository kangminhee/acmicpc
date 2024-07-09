#include <iostream>
using namespace std;

long long n, A[1010101], b, c, res;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> b >> c;

    // if (b > c) 
    for (int i = 0; i < n; i++) {
        res++;
        A[i] -= b;
        if (A[i] > 0) res += (A[i] % c ? A[i]/c + 1 : A[i]/c);
    }

    // else
    //     for (int i = 0; i < n; i++) {
    //     res += (A[i] % c ? A[i]/c + 1 : A[i]/c);
    // }

    cout << res;

    return 0;
}
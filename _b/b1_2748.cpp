#include <iostream>
using namespace std;

int main() {
    long long i, f0 = 0, f1 = 1, tmp; int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {

        tmp = (f0 + f1)%1000000;
        f0 = f1%1000000;
        f1 = tmp%1000000;
    }
    switch (n)
    {
    case 0:
        cout << f0;
        break;
    case 1:
        cout << f1;
        break;
    default:
        cout << tmp;
        break;
    }
    return 0;
}
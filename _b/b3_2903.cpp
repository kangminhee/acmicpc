#include <iostream>
using namespace std;

int main() {
    int a=2, n; cin >> n;
    while (n--) a = 2*a - 1;
    cout << a * a;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a / b >= 2) {
        cout << b;
        return 0;
    } else if (a / b < 2) {
        cout << a / 2;
        return 0;
    }
    return 0;
}
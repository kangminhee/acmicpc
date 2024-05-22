#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    cout << money * 78 / 100 << " " << money * 80 / 100 + money * 20 / 100 * 78 / 100;
    return 0;
}
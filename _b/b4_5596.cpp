#include <iostream>
using namespace std;

int main() {
    int a[2] = {}, tmp;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> tmp;
            a[i] += tmp;
        }
    }
    if (a[0] > a[1]) cout << a[0];
    else cout << a[1];
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < 9; i ++) {
        int tmp; cin >> tmp;
        n -= tmp;
    }
    cout << n;
    return 0;
}
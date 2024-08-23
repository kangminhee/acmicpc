#include <iostream>
using namespace std;

int main() {
    int input, n, res = 0;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> input;
        if (input < n) res += input;
        else res += n;
    }
    cout << res;
}
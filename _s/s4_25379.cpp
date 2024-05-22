#include <iostream>

using namespace std;

int main() {
    int n, input;
    long result1 = 0, result2 = 0, nega = 0, posi = 0; 

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input % 2) {
            nega++;
        } else {
            result1 += nega;
        }
        if (!(input % 2)) {
            posi++;
        } else {
            result2 += posi;
        }
    }
    if (result2 > result1) cout << result1;
    else cout << result2;

    return 0;
}
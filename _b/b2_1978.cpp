#include <iostream>
using namespace std;

int main() {
    int n, num, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        int condition = 1;
        if (num == 1) condition = 0;
        for (int j = 2; j*j <= num; j++) {
            if (num % j == 0) condition = 0;
        }
        if (condition) res++;
    }
    cout << res;
    return 0;
}
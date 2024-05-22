//조합 b/a
#include <iostream>
using namespace std;

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, m;
        long long int a = 1, b = 1;
        cin >> n >> m;
        if (n > m-n) n = m-n;
        for (int i = m; i > m-n; i--) {
            a *= i;
        }
        for (int i = n; i > 0; i--) {
            b *= i;
        }
        cout << a/b << endl;
    }
    return 0;
}
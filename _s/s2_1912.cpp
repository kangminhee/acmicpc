#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int l[n+1];
    l[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> l[i];
        l[i] += l[i-1];
    }

    for (int i = 1; i <= n; i++) {
        cout << l[i] << " ";
    }

    cout << endl;
}
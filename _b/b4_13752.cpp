#include <iostream>
using namespace std;

int main() {
    int n, x; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int i = 0; i < x; i++) {
            cout << "=";
        }
        cout << endl;
    }
}
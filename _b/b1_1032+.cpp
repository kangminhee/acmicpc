#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string A, B;

    cin >> A;
    for (int i = 0; i < n-1; i++) {
        cin >> B;
        for (int j = 0; j < A.length(); j++) {
            A[j]==B[j] ? : A[j]='?';
        }
    }
    cout << A;
}
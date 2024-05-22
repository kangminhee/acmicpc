#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string input;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        int length = input.length();
        if (length >= 6 && length <= 9) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
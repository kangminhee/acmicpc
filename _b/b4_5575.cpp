#include <iostream>
using namespace std;

int main() {
    int l[9] = {};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> l[j];
        }
        if (l[2] > l[5]) {
            l[8] = 60 + l[5] - l[2];
            l[4] -= 1;
        } else {
            l[8] = l[5] - l[2];
        }
        if (l[1] > l[4]) {
            l[7] = 60 + l[4] - l[1];
                l[3] -= 1;
        } else {
            l[7] = l[4] - l[1];
        }
        l[6] = l[3] - l[0];

        cout << l[6] << " " << l[7] << " " << l[8] << endl;
    }
}
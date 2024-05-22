#include <iostream>
using namespace std;

int main() {
    int list[3][2], x[3] = {}, y[3] = {};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> list[i][j];
        }
    }
    if (list[0][0] == list[1][0]) {
        x[0] = x[1] = 1;
    } else if (list[0][0] == list[2][0]) {
        x[0] = x[2] = 1;
    } else if (list[1][0] ==  list[2][0]) {
        x[1] = x[2] = 1;
    }
    if (list[0][1] == list[1][1]) {
        y[0] = y[1] = 1;
    } else if (list[0][1] == list[2][1]) {
        y[0] = y[2] = 1;
    } else if (list[1][1] ==  list[2][1]) {
        y[1] = y[2] = 1;
    }
    for (int i = 0; i < 3; i++) {
        if (x[i] == 0) cout << list[i][0] << " ";
    }
    for (int i = 0; i < 3; i++) {
        if (y[i] == 0) cout << list[i][1];
    }
    return 0;
}
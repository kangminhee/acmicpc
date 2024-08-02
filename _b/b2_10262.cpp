#include <iostream>
using namespace std;

int main() {
    int max = 0, tmpn; string s, tmps;
    for (int i = 0;i < 7; i++) {
        cin >> tmps;
        cin >> tmpn;
        if (tmpn > max) {max = tmpn;s = tmps;}
    }
    cout << s;
}
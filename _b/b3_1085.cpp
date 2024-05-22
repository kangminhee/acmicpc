#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int list[4] = {};
    for (int i = 0; i < 4; i++) {
        cin >> list[i];
    }
    list[2] -= list[0];
    list[3] -= list[1];
    sort(list, list+4);
    cout << list[0];
    return 0;
}
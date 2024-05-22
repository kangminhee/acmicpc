#include <iostream>
using namespace std;


int main() {
    int l[4];
    for (int i = 0; i < 4; i++) {
        cin >> l[i];
    }
    l[0]+l[3] > l[1]+l[2] ? cout << l[1]+l[2] : cout << l[0]+l[3];
    return EXIT_SUCCESS;
}
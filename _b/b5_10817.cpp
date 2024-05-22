#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int* list = new int[3];
    for (int i = 0; i < 3; i++) {
        cin >> list[i];
    }
    sort(list, list+3);

    cout << list[1];
    return 0;
}
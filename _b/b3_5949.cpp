#include <bits/stdc++.h>
using namespace std;

int main() {
    char L[11] = {}; int i = 0;
    char c;
    scanf("%c", &c);
    while (c != '\n') {
        L[i++] = c;
        scanf("%c", &c);
    }
    // cout << i;
    for (int j = 0; j < i; j++) {
        if ((i-j)%3 == 0 && j != 0) cout << ",";
        cout << L[j];
    }
    return 0;
}
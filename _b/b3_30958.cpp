#include <iostream>
using namespace std;

int main() {
    int n, res = 0; scanf("%d", &n); getchar();
    int list[30] = {};
    for (int i = 0; i < n; i++) {
        char c;
        scanf("%c", &c);
        if (c >= 'a' && c <= 'z') {
            list[c - 'a']++;
            res = max(res, list[c-'a']);
        }
    }
    cout << res;
}
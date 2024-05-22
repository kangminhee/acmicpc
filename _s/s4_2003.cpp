#include <iostream>
using namespace std;

int main() {
    int n, m, res = 0;
    cin >> n >> m;
    int *list = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = i; j < n; j++) {
            tmp += list[j];
            if (tmp == m) res++;
        }
    }
    cout << res;
    return 0;
}
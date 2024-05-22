#include <iostream>
using namespace std;

typedef struct l {
    int number;
    int quantity;
}l;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, m; cin >> n;
    l * list = new l[n+1];
    for (int i = 0; i < n; i++) {
        cin >> k;
        int cur = 0;
        while (list[cur].number != 0 && list[cur].number != k) {
            ++cur;
        }
        list[cur].number = k;
        list[cur].quantity += 1;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> k;
        int cur = 0;
        while (list[cur].number != 0 && list[cur].number != k) {
            ++cur;
        }
        cout << list[cur].quantity << " ";
    }
}
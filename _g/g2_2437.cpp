#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, list[1010]={};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> list[i];
    }
    sort(list+1, list+1+n);
    
    int res = 1;
    for (int i = 1; i <= n; i++) {
        if (list[i] > res) {
            break;
        }
        res += list[i];
    }
    
    cout << res;

    return 0;
}
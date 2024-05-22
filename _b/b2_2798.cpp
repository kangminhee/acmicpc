#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n, m, res=0, tmp=0;
    cin >> n >> m;
    int * list = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    sort(list, list+n);
    
    for (int i = 0; i < n; i++) {
        if (list[i] > m) {
            n = i;
            break;
        }
    }

    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                tmp = list[i] + list[j] + list[k];
                if ((m - tmp >= 0) && (m - tmp < m - res)) {
                    res = tmp;
                }
            }
        }
    }

    cout << res;

    return EXIT_SUCCESS;
}
#include <iostream>
using namespace std;

int main() {
    int n, i = 0, tmp1, tmp2, cond;
    while (i++) {
        cin >> n;
        tmp1 = tmp2 = 0;
        cond = 1;
        for (int j = 0; j < n; j++) {
            tmp2 = tmp1;
            cin >> tmp1;
            if (tmp1 < tmp2) {
                cond = 0;
                break;
            }
        }
        
    }
}
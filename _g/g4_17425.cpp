// 시간초과 코드
#include <iostream>
using namespace std;

/*
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, input;
    cin >> n;
    for (int repeat = 1; repeat <= n; repeat++) {
        cin >> input;
        int res = 0;
        for (int i = 1; i <= input; i++) {
            int j = i, mul = 1;
            while (j * mul <= input) {
                // cout << j * mul << "\n";
                res += j;
                mul ++;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
*/

#define MAX 1000000

long long res_list[MAX+1] = {};

void start_function();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, input;
    start_function();

    cin >> n;
    for (int repeat = 0; repeat < n; repeat++) {
        cin >> input;
        cout << res_list[input] << "\n";
    }
}

void start_function() {
    for (int i = 1; i <= MAX; i++) {
        for (int j = 1; i * j <= MAX; j++) {
            res_list[i * j] += i;
        }
        res_list[i] += res_list[i-1];
    }
}
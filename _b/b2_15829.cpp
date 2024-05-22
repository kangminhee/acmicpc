#include <iostream>
#define r   31
#define M 1234567891

using namespace std;

int main() {
    int l;
    char arr[51] = { 0 };
    long long res = 0, R = 1;

    scanf("%d", &l);
    for (int i = 0; i < l; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < l; i++) {
        res += ((arr[i] - 96) * R) % M;
        res %= M;
        R = (R * r) %M;
        
    }
    cout << res;
    return 0;
}
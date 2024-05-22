#include <iostream>
using namespace std;

int main() {
    int n, res=0;
    long long int tmp=1;
    cin >> n;

    for (int i = n; i > 0; i--) {
        int now = i;
        // cout << tmp % 10 << endl;

        while (now%10 == 0) {
            res += 1;
            now /= 10;
        }

        // cout << now <<"and"<<tmp<< endl;
        
        while (now % 5 == 0) {
            now /= 5;
            res += 1;
        }
    }
    cout << res;
    return 0;
}
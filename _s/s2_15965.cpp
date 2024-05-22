#include <iostream>
#include <vector>
using namespace std;

int Check[8080808];
vector<int> Primes;

int main() {
    int n, tmp;
    cin >> n;
    for (int i = 2; i <= 8000000; i++) {
        if(Check[i]) continue;
        Primes.push_back(i);
        for (int j = i+i; j <= 8000000; j+= i) Check[j] = 1;
    }
    cout << Primes[n-1];

    return 0;
}
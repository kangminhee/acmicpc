#include <iostream>
#include <vector>

using namespace std;

int Check[5000000];
vector<int> Primes;

void prime_function() {
    for (int i = 2; i*i <= 5000000; i++) {
        if(Check[i]) continue;
        Primes.push_back(i);
        for (int j = i+i; j <= 2500000; j+= i) Check[j] = 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k; cin >> n;

    prime_function();

    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < Primes.size(); j++) {
            while (k % Primes[j] == 0) {
                cout << Primes[j] << " ";
                k /= Primes[j];
            }
        }
        if (k > 1) cout << k;
        cout << "\n";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int n, m;
vector<int> balloon;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        balloon.push_back(tmp);
    }

    long long int start = *min_element(balloon.begin(), balloon.end()) * (m / n);
    long long int end = *max_element(balloon.begin(), balloon.end()) * (m / n + 1);
    long long int result = 0;

    // cout << start << "::" << end << endl;

    while (start <= end) {
        long long int total = 0;
        long long int mid = (start+end) / 2;
        for (int i = 0; i < n; i++) {
            total += mid / balloon[i];
        }
        // cout << total << ":" << mid << endl;
        if (total < m) {
            start = mid + 1;
        } else {
            result = mid;
            end = mid - 1;
        }
    }
    cout << result;
    
    return 0;
}
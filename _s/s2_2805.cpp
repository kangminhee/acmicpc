#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> tree;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        tree.push_back(tmp);
    }

    int start = 0, end = *max_element(tree.begin(), tree.end());
    int result = 0;

    while (start <= end) {
        long long int total = 0;
        int mid = (start+end) / 2;
        for (int i = 0; i < n; i++) {
            if (tree[i]>mid) total += tree[i] - mid;
        }
        if (total < m) {
            end = mid - 1;
        } else {
            result = mid;
            start = mid + 1;
        }
    }
    cout << result;
    
    return 0;
}
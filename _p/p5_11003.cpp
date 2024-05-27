#include <bits/stdc++.h>
using namespace std;

typedef struct ming{
    int index;
    int data;
} ming;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l; cin >> n >> l;
    deque<ming> qq;
    for (int i = 1; i <= n; i++) {
        ming tmp; cin >> tmp.data; tmp.index = i;
        while(!qq.empty() && qq.front().index < i-l+1) {
            qq.pop_front();
        }
        while (!qq.empty() && qq.back().data >= tmp.data) {
            qq.pop_back();
        }
        qq.push_back(tmp);

        cout << qq.front().data << " ";
    }
}
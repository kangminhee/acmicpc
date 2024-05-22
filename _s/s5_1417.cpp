#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> q;
    int n, dasom, input, res = 0; cin >> n >> dasom;
    n--;
    while(n--) {
        cin >> input;
        if (input >= dasom) q.push(input);
    }
    while(!q.empty() && q.top()>=dasom) {
        int tmp = q.top();
        q.pop();
        tmp--; res++; dasom++;
        q.push(tmp);
    }

    cout << res;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<string> v;
map<string, int> mm;

bool compare(string a, string b) {
    if (mm[a] != mm[b]) return mm[a]>mm[b];
    if (a.length() != b.length()) return a.length()>b.length();
    return a<b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s.length() >= m) {
            v.push_back(s);
            ++mm[s];
        }
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++) {
        if (i == 0 || v[i-1]!=v[i]) cout << v[i] << "\n";
    }
    return 0;
}
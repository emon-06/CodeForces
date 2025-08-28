#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; string s; 
    if(!(cin >> n >> s)) return 0;
    unordered_map<string,int> cnt;
    string best; int mx = 0;
    for (int i = 0; i + 1 < n; i++) {
        string t = s.substr(i, 2);
        int c = ++cnt[t];
        if (c > mx) mx = c, best = t;
    }
    cout << best << "\n";
    return 0;
}

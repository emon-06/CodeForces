#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; 
    if(!(cin >> n)) return 0;
    unordered_map<string,int> cnt;
    for(int i = 0; i < n; ++i){
        string s; cin >> s;
        ++cnt[s];
    }
    string ans; int best = -1;
    for (auto &p : cnt) {
        if (p.second > best) best = p.second, ans = p.first;
    }
    cout << ans << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> score;
    vector<pair<string, int>> rounds;
    for (int i = 0; i < n; i++) {
        string name;
        int x;
        cin >> name >> x;
        score[name] += x;
        rounds.push_back({name, score[name]});
    }
    int mx = INT_MIN;
    for (auto &p : score) mx = max(mx, p.second);
    set<string> candidates;
    for (auto &p : score) if (p.second == mx) candidates.insert(p.first);
    for (auto &r : rounds) {
        if (candidates.count(r.first) && r.second >= mx) {
            cout << r.first << "\n";
            return 0;
        }
    }
    return 0;
}

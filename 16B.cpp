#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
    int res = 0;
    for (int i = 0; i < m && n > 0; ++i) {
        int take = min(n, v[i].first);
        res += take * v[i].second;
        n -= take;
    }
    cout << res << endl;
    return 0;
}

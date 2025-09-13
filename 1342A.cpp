#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        long long mn = min(x, y);
        long long ans = mn * min(2 * a, b) + (max(x, y) - mn) * a;
        cout << ans << "\n";
    }
    return 0;
}

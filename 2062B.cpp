#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool bad = false;
        for (int i = 0; i < n; i++) {
            long long mx = max(i, n - 1 - i) * 2LL;
            if (a[i] <= mx) {
                bad = true;
                break;
            }
        }
        cout << (bad ? "NO\n" : "YES\n");
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        b = a;
        sort(b.begin(), b.end());
        if (k == 1 && a != b) {
            cout << "NO\n";
        } else if (k >= n) {
            cout << "YES\n";
        } else {
            cout << (a == b ? "YES\n" : "YES\n");
        }
    }
    return 0;
}

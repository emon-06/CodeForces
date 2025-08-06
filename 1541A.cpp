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
        vector<int> ans(n);
        if (n % 2 == 0) {
            // Even case
            for (int i = 0; i < n; i += 2) {
                ans[i] = i + 2;
                ans[i + 1] = i + 1;
            }
        } else {
            // Odd case: handle first 3 separately
            ans[0] = 2;
            ans[1] = 3;
            ans[2] = 1;
            for (int i = 3; i < n; i += 2) {
                if (i + 1 < n) {
                    ans[i] = i + 2;
                    ans[i + 1] = i + 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}

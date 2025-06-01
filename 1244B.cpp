#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        int ans = n;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                ans = max(ans, max(2 * (i + 1), 2 * (n - i)));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

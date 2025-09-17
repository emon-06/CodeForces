#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    if (n == 1) {
        cout << 0 << "\n";
        return 0;
    }

    long long ans = LLONG_MAX;
    ans = min(ans, a + (n - 2) * min({a, b, c}));
    ans = min(ans, b + (n - 2) * min({a, b, c}));
    ans = min(ans, c + (n - 2) * min({a, b, c}));

    cout << ans << "\n";
    return 0;
}

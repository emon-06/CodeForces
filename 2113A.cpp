#include <bits/stdc++.h>
using namespace std;

long long cook(long long k, long long a, long long b, long long x, long long y) {
    long long ans = 0;
    if (y < x) {
        if (k >= b) {
            long long c2 = (k - b) / y + 1;
            k -= c2 * y;
            ans += c2;
        }
        if (k >= a) ans += (k - a) / x + 1;
    } else {
        if (k >= a) {
            long long c1 = (k - a) / x + 1;
            k -= c1 * x;
            ans += c1;
        }
        if (k >= b) ans += (k - b) / y + 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        long long k,a,b,x,y;
        cin >> k >> a >> b >> x >> y;
        cout << cook(k,a,b,x,y) << "\n";
    }
    return 0;
}

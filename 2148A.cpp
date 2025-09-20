#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        int sum = 0;
        if (n % 2 == 0) {
            sum = 0; // even length sequence cancels out
        } else {
            sum = x; // odd length sequence leaves one x
        }
        cout << sum << "\n";
    }
    return 0;
}

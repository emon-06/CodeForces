#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int one = 0, two = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) one++;
            else two++;
        }

        int sum = one + 2 * two;

        if (sum % 2 != 0) {
            cout << "NO\n";
        } else {
            if (one == 0 && (two % 2 != 0)) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
    return 0;
}

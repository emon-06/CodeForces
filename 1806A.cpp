#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b > d) {
            cout << -1 << "\n";
            continue;
        }

        long long diagonal = d - b;
        long long x_after_diag = a + diagonal;
        if (x_after_diag < c) {
            cout << -1 << "\n";
            continue;
        }

        long long steps = diagonal + (x_after_diag - c);
        cout << steps << "\n";
    }

    return 0;
}

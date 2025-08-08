#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        set<int> x, y;
        for (int i = 0; i < 4; i++) {
            int a, b;
            cin >> a >> b;
            x.insert(a);
            y.insert(b);
        }
        int side = max(*x.rbegin() - *x.begin(), *y.rbegin() - *y.begin());
        cout << side * side << '\n';
    }
    return 0;
}

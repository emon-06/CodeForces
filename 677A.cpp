#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h, w = 0;
    cin >> n >> h;
    for (int i = 0, a; i < n; ++i) {
        cin >> a;
        w += (a > h ? 2 : 1);
    }
    cout << w << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--) {
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                ++i;
            }
        }
    }
    cout << s << '\n';
    return 0;
}

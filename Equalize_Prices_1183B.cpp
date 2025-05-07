#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int left = a[0] - k;
        int right = a[0] + k;
        for (int i = 1; i < n; ++i) {
            left = max(left, a[i] - k);
            right = min(right, a[i] + k);
        }
        if (left > right) {
            cout << -1 << '\n';
        } else {
            cout << right << '\n';
        }
    }
    return 0;
}

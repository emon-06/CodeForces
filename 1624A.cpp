#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int mx = *max_element(a.begin(), a.end());
        int mn = *min_element(a.begin(), a.end());
        cout << mx - mn << "\n";
    }
    return 0;
}

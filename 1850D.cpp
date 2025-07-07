#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        sort(a.begin(), a.end());
        int maxLen = 1, left = 0;

        for (int right = 1; right < n; ++right) {
            if (a[right] - a[right - 1] <= k) {
                // continue extending
            } else {
                left = right;
            }
            maxLen = max(maxLen, right - left + 1);
        }

        cout << n - maxLen << '\n';
    }
    return 0;
}

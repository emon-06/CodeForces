#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<int> even, odd;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x % 2 == 0) even.push_back(x);
            else odd.push_back(x);
        }
        vector<int> a = even;
        a.insert(a.end(), odd.begin(), odd.end());
        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (gcd(a[i], 2 * a[j]) > 1) ++count;
            }
        }
        cout << count << '\n';
    }
    return 0;
}

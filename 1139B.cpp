#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long long res = 0, limit = a[n - 1];
    for (int i = n - 1; i >= 0; --i) {
        limit = min(limit, a[i]);
        res += limit;
        if (limit > 0) --limit;
    }

    cout << res << '\n';
    return 0;
}

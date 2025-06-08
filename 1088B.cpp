#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());
    int last = 0, i = 0;
    while (k > 0 && i < n) {
        while (i < n && a[i] == last) i++;
        if (i == n) break;
        cout << a[i] - last << endl;
        last = a[i];
        k--;
    }
    while (k--) cout << 0 << endl;
    return 0;
}

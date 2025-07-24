#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int ans;
        cin >> ans;
        for (int i = 1; i < n; ++i) {
            cin >> x;
            ans &= x;
        }
        cout << ans << '\n';
    }
    return 0;
}

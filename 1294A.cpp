#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long mx = max(a, max(b, c));
        long long need = (mx - a) + (mx - b) + (mx - c);

        if (n < need) {
            cout << "NO" << endl;
        } else if ((n - need) % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

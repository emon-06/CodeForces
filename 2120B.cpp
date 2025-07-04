#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        int count = 0;

        for (int i = 0; i < n; ++i) {
            int dx, dy;
            long long x, y;
            cin >> dx >> dy >> x >> y;

            long long tx = dx == 1 ? s - x : x;
            long long ty = dy == 1 ? s - y : y;

            if (tx % (2 * s) == ty % (2 * s))
                count++;
        }
        cout << count << '\n';
    }

    return 0;
}

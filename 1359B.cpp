#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y, cost = 0;
        cin >> n >> m >> x >> y;
        string row;
        for (int i = 0; i < n; ++i) {
            cin >> row;
            for (int j = 0; j < m; ++j) {
                if (row[j] == '.') {
                    if (j + 1 < m && row[j + 1] == '.' && y < 2 * x) {
                        cost += y;
                        ++j;
                    } else {
                        cost += x;
                    }
                }
            }
        }
        cout << cost << '\n';
    }
    return 0;
}

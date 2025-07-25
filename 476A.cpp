#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int min_moves = (n + 1) / 2;
    int ans = -1;

    for (int moves = min_moves; moves <= n; ++moves) {
        if (moves % m == 0) {
            ans = moves;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long max_sum = 0;
    for (int i = 0; i < n; ++i) {
        long long x, y;
        cin >> x >> y;
        max_sum = max(max_sum, x + y);
    }
    cout << max_sum << endl;
    return 0;
}

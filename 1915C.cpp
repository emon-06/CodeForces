#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0, x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }
        long long root = sqrt(sum);
        if (root * root == sum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double res = 0;
    for (int i = 1; i <= n; ++i)
        res += 1.0 / i;
    cout << fixed << setprecision(12) << res << endl;
    return 0;
}

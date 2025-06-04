#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double H, L;
    cin >> H >> L;
    double d = (L * L - H * H) / (2 * H);
    cout << fixed << setprecision(10) << d << '\n';
    return 0;
}

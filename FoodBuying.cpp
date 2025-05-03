#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s;
        cin >> s;
        long long spent = 0;
        while (s >= 10) {
            long long x = s / 10 * 10;
            spent += x;
            s = s - x + x / 10;
        }
        spent += s;
        cout << spent << '\n';
    }
    return 0;
}

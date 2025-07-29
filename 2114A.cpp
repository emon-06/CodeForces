#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int year = stoi(s);
        bool found = false;
        for (int a = 0; a <= 99; a++) {
            for (int b = 0; b <= 99; b++) {
                int sum = a + b;
                if (sum * sum == year) {
                    cout << a << " " << b << '\n';
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (!found) cout << -1 << '\n';
    }
    return 0;
}

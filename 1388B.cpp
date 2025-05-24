#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int eights = (n + 3) / 4;
        int nines = n - eights;
        for (int i = 0; i < nines; ++i) cout << '9';
        for (int i = 0; i < eights; ++i) cout << '8';
        cout << '\n';
    }
    return 0;
}

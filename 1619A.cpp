#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.length();
        if (len % 2 != 0) {
            cout << "NO\n";
            continue;
        }
        string first = s.substr(0, len / 2);
        string second = s.substr(len / 2);
        if (first == second) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

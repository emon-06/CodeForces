#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s == "abc") {
            cout << "YES\n";
            continue;
        }
        bool ok = false;
        for (int i = 0; i < 3 && !ok; ++i) {
            for (int j = i + 1; j < 3 && !ok; ++j) {
                swap(s[i], s[j]);
                if (s == "abc") ok = true;
                swap(s[i], s[j]); // revert
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}

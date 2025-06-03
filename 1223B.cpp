#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        unordered_set<char> letters(s.begin(), s.end());
        bool found = false;
        for (char c : t) {
            if (letters.count(c)) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << '\n';
    }
    return 0;
}

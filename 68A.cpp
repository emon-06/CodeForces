#include <iostream>
using namespace std;

int main() {
    string s, t = "hello";
    cin >> s;
    int j = 0;
    for (char c : s) {
        if (c == t[j]) j++;
        if (j == 5) break;
    }
    if (j == 5) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

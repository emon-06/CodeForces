#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Remove trailing zeros
    while (!s.empty() && s.back() == '0') s.pop_back();

    // Remove leading zeros
    reverse(s.begin(), s.end());
    while (!s.empty() && s.back() == '0') s.pop_back();
    reverse(s.begin(), s.end());

    string rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

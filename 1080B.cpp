#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (isPalindrome(s))
            cout << -1 << endl;
        else
            cout << s << endl;
    }
    return 0;
}

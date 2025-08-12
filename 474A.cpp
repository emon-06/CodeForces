#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char d;
    string t;
    cin >> d >> t;
    int shift = (d == 'R' ? -1 : 1);
    for (char c : t) cout << s[s.find(c) + shift];
    cout << "\n";
}

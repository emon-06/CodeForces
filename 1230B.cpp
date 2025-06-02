#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    if (n == 1 && k > 0) {
        cout << "0\n";
        return 0;
    }
    if (s[0] != '1' && k > 0) {
        s[0] = '1';
        --k;
    }
    for (int i = 1; i < n && k > 0; ++i) {
        if (s[i] != '0') {
            s[i] = '0';
            --k;
        }
    }
    cout << s << '\n';
    return 0;
}

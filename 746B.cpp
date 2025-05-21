#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s, res;
    cin >> n >> s;
    for (int i = n - 1; i >= 0; --i) {
        int pos = res.size() / 2;
        res.insert(res.begin() + pos, s[i]);
    }
    cout << res << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool caps = true;
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            caps = false;
            break;
        }
    }
    if (caps) {
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }
    cout << s << endl;
    return 0;
}

#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    set<char> st;
    for (char c : s) st.insert(tolower(c));
    cout << (st.size() == 26 ? "YES" : "NO") << "\n";
    return 0;
}

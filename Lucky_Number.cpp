#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int sum1 = 0, sum2 = 0;
    bool lucky = true;
    for (int i = 0; i < n; ++i) {
        if (s[i] != '4' && s[i] != '7')
            lucky = false;
        if (i < n / 2)
            sum1 += s[i] - '0';
        else
            sum2 += s[i] - '0';
    }
    if (lucky && sum1 == sum2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

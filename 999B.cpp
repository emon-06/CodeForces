#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string t;
    cin >> n >> t;

    vector<int> divisors;
    for (int d = 1; d <= n; ++d)
        if (n % d == 0)
            divisors.push_back(d);

    for (int d : divisors)
        reverse(t.begin(), t.begin() + d);

    cout << t << endl;
    return 0;
}

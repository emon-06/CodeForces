#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> even, odd;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }

    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());

    int diff = abs((int)even.size() - (int)odd.size());

    if (diff <= 1) {
        cout << 0 << endl;
    } else {
        vector<int>& larger = even.size() > odd.size() ? even : odd;
        int sum = 0;
        for (int i = larger.size() - 1; i >= larger.size() - (diff - 1); --i) {
            sum += larger[i];
        }
        cout << sum << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int max_a = *max_element(a.begin(), a.end());
    int total = 0;
    for (int i = 0; i < n; ++i)
        total += max_a - a[i];
    cout << total << endl;
    return 0;
}


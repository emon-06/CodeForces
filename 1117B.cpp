#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.rbegin(), a.rend());
    long long first = a[0];
    long long second = a[1];
    long long group = m / (k + 1);
    long long rem = m % (k + 1);
    long long result = group * (first * k + second) + rem * first;
    cout << result << endl;
    return 0;
}

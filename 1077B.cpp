#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    for (int i = 1; i < n - 1; ++i) {
        if (a[i - 1] == 1 && a[i] == 0 && a[i + 1] == 1) {
            cnt++;
            a[i + 1] = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}

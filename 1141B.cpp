
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
    
    int max_rest = 0, current = 0;
    for (int i = 0; i < 2 * n; ++i) {
        if (a[i % n] == 1)
            current++;
        else
            current = 0;
        max_rest = max(max_rest, current);
    }
    cout << max_rest << endl;
    return 0;
}

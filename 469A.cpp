#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, p, q, x;
    set<int> s;
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> x;
        s.insert(x);
    }
    cout << (s.size() == n ? "I become the guy." : "Oh, my keyboard!") << '\n';
    return 0;
}

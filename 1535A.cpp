#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int firstWinner = max(a, b);
        int secondWinner = max(c, d);

        int strongest = max({a, b, c, d});
        int secondStrongest;

        // find second strongest
        if (strongest == a) secondStrongest = max({b, c, d});
        else if (strongest == b) secondStrongest = max({a, c, d});
        else if (strongest == c) secondStrongest = max({a, b, d});
        else secondStrongest = max({a, b, c});

        if ((firstWinner == strongest && secondWinner == secondStrongest) ||
            (firstWinner == secondStrongest && secondWinner == strongest)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

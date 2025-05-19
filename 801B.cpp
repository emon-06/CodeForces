#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    string z = x;
    for (int i = 0; i < x.size(); ++i) {
        if (y[i] > x[i]) {
            cout << -1 << endl;
            return 0;
        }
        z[i] = y[i];
    }

    cout << z << endl;
    return 0;
}

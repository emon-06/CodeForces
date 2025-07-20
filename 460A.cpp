#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int days = 0, socks = n;
    while (socks > 0) {
        days++;
        socks--;
        if (days % m == 0) {
            socks++;
        }
    }

    cout << days << endl;
    return 0;
}



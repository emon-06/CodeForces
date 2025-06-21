#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0, level = 0, cubes = 0;
    while (true) {
        level++;
        cubes += level;
        total += cubes;
        if (total > n) break;
    }
    cout << level - 1 << endl;
    return 0;
}

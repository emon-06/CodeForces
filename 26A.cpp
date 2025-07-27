#include <iostream>
using namespace std;

bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int divisors = 0;
        for (int j = 2; j <= i; ++j) {
            if (i % j == 0 && is_prime(j)) {
                ++divisors;
            }
        }
        if (divisors == 2)
            ++count;
    }

    cout << count << endl;
    return 0;
}

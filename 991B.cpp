#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> grades[i];
        sum += grades[i];
    }

    sort(grades.begin(), grades.end());

    int count = 0;
    while ((double)sum / n < 4.5) {
        sum += 5 - grades[count];
        count++;
    }

    cout << count << endl;
    return 0;
}

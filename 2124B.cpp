#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long res;
        if(n == 2){
            res = min(2 * a[0], a[0] + a[1]);
        } else {
            res = min(2 * a[0], a[0] + a[1]);
        }

        cout << res << "\n";
    }

    return 0;
}

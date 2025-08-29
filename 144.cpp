#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    int mxIdx = find(a.begin(), a.end(), mx) - a.begin();
    int mnIdx = find(a.rbegin(), a.rend(), mn) - a.rbegin();
    mnIdx = n - 1 - mnIdx;
    int ans = mxIdx + (n - 1 - mnIdx);
    if(mxIdx > mnIdx) ans--;
    cout << ans;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; if(!(cin>>t)) return 0;
    while(t--){
        string s; cin>>s;
        int nlen = s.size();
        if(stoi(s)%7==0){ cout<<s<<"\n"; continue; }
        int best = 1e9;
        string ans = s;
        int low = (nlen==2?10:100);
        int high = (nlen==2?99:999);
        for(int x=low;x<=high;x++){
            if(x%7!=0) continue;
            string tstr = to_string(x);
            if((int)tstr.size()!=nlen) continue;
            int diff=0;
            for(int i=0;i<nlen;i++) if(s[i]!=tstr[i]) diff++;
            if(diff<best){ best=diff; ans=tstr; }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int solve(string s,string l){
    int i=s.size()-1;
    int ans=0;
    char t=l[1];
    char o=l[0];
    for(;i>=0;i--){
        if(s[i]==t){
            break;
        }
        else{
            ans++;
        }
    }
    i--;
    if(i<0)return ans;
    for(;i>=0;i--){
        if(s[i]==o){
            break;
        }
        else{
            ans++;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int ans=1e9;
        ans=min(ans,solve(s,"00"));
        ans=min(ans,solve(s,"25"));
        ans=min(ans,solve(s,"50"));
        ans=min(ans,solve(s,"75"));
        cout<<ans<<endl;
    }

    return 0;
}
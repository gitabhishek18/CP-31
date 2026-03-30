#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0;
        int j=0;
        vector<int>psum(n+1,0);
        for(int i=0;i<n;i++){
            psum[i+1]=psum[i]+((s[i]=='W')?1:0);
        }
        int ans=n;
        // for(int i=0;i<=n;i++){
        //    cout<<psum[i]<<' ';
        // }
        
        for(int i=0;i<n-k+1;i++){
            ans=min(psum[i+k]-psum[i],ans);
        }
        cout<<ans<<endl;
    }

    return 0;
}
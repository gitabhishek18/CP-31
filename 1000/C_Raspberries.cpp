#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n;
        int k; 
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=INT_MAX;        
        int cnt=0;
        for(int i=0;i<n;i++){
            if(k==4 && a[i]%2==0)cnt++;
            if(a[i]%k==0){
                ans=0;
                break;
            }
            ans=min(ans,k-a[i]%k);
        }
        if(k==4){
            if(cnt>1)cout<<0<<endl;
            else if(cnt==1)cout<<min(ans,1)<<endl;
            else cout<<min(ans,2)<<endl;
        }
        else cout<<ans<<endl;
    }
    return 0;
}
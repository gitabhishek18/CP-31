#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long len=1;
        long long ans =0;
        for(int i=0;i<n;i++){
            while(i<n && a[i]<=q){
                len++;
                i++;
            }
            //cout<<"len=  "<<len<<endl;
            if(len>=k)ans+=1ll*(len+-k)*(len+-k+1)/2;
            len=1;
        }
        cout<<ans<<endl;
    }

    return 0;
}
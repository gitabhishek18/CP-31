#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long> x(n,0);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x.begin(),x.end());
        long long ans=b;
        for(int i=0;i<n;i++){
            ans+=min(x[i],a-1);
        }
        cout<<ans<<endl;
    }

    return 0;
}
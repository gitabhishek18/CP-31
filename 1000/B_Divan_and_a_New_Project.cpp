#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            a.push_back({k,i+1});
        }
        long long ans=0;
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        vector<int> res(n+1);
        int mind=1;
        res[0]=0;
        for(int i=0;i<n;i++){
            res[a[i].second]=mind+res[0];
            ans+=1ll*2*mind*a[i].first;
            i++;
            if(i>=n)continue;
            res[a[i].second]=res[0]-mind;
            ans+=1ll*2*mind*a[i].first;
            mind++;
        }
        cout<<ans<<endl;
        for(int i=0;i<=n;i++){
            cout<<res[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n,p;
        cin>>n>>p;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<int,int>> ab(n);
        for(int i=0;i<n;i++){
            ab[i]={b[i],a[i]};
        }
        sort(ab.begin(),ab.end(),[](pair<int,int> &a, pair<int,int> &b){
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        });
        int ans=0;
        int num=0;
        for(int i=0;i<n;i++){
            num+=1;
            ans+=p;
            if(num>=n)break;
            num+=ab[i].second;
            ans += ab[i].first * ( (num >= n) ? (ab[i].second - (num - n)) : ab[i].second );
            if(num>=n)break;
            
        }
        cout<<ans<<endl;
    }

    return 0;
}
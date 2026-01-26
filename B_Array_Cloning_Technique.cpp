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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<long long,long long>mp;
        for(long long i=0;i<n;i++){
            mp[a[i]]++;
        }
        long long ne=0;
        long long maxe=0;
        for(auto i : mp){
            maxe=max(i.second,maxe);
        }
        int ans=0;
        while (maxe<n){   
            ans++;
            if(maxe*2<n){
                ans+=maxe;
                maxe=maxe*2;
            }
            else{
                ans+=n-maxe;
                maxe=n;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
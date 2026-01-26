#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        cin>>n>>q;
        vector<int> a(n);
        vector<long long>presum(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            presum[i+1]=presum[i]+a[i];
        }
        while(q--){
            long long l,r,k;
            long long sum=0;
            cin>>l>>r>>k;
            sum=presum[l-1];
            sum+=(r-l+1)*k;
            sum+=presum[n]-presum[r];
            if(sum %2==0)cout<<"NO"<<endl;
            else cout<< "YES"<<endl;
        }
    }

    return 0;
}
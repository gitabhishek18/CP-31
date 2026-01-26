#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=1;
        for(int i=0;i<n-1;i++){
            int count=1;
            while (i<n-1 && a[i+1]-a[i]<=k)
            {
                count++;
                i++;
            }
            ans=max(ans,count);
        }
        cout<<n-ans<<endl;
    }

    return 0;
}
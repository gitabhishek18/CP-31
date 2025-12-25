#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=gcd(ans,abs(p[i-1]-i));
        }
        cout<<ans<<endl;
    }

    return 0;
}
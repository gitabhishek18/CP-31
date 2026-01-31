#include <bits/stdc++.h>
using namespace std;
#define ll=long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n=0;
        cin>>n;
        vector<vector<int>>a(n);
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            vector<int> b(k);
            for(int j=0;j<k;j++){
                cin>>b[j];
            }
            a[i]=b;
        }
        int ch=INT_MAX;
        int in=0;
        int mie=INT_MAX;
        for(int i=0;i<n;i++){
            sort(a[i].begin(),a[i].end());
            if(ch>a[i][1]){
                in=i;
                ch=a[i][1];
            }
            mie=min(a[i][0],mie);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            if(i==in)ans+=mie;
            else ans+=a[i][1];
        }
        cout<<ans<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int l=0;
    int r=n-1;
    int len=1;
    int ans=0;
    while(l<=r){
            while(l<r && a[r]*len<=d){
                l++;
                len++;
            }
            if(a[r]*len<=d)break;
            len=1;
            r--;
            ans++;
    }
    cout<<ans<<endl;

    return 0;
}
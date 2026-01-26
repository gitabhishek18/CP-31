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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=a[0];
        for(int i=0;i<n;i++){
            ans=ans & a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long n;
        cin>>n;
        int ans=0;
        long s=n;
        int cnt=1;
        int ch=0;
        while(s!=0){
            s=s/10;
            cnt=cnt*10;
            ch++;
        }
        cnt=cnt/10;
        ans=n/cnt;
        ans=ans+(ch-1)*9;
        cout<<ans<<endl;     
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        long long ans=0;
        int s=n;
            while(s!=1){
                if(s%6==0){
                    s=s/6;
                }
                else if(s%3!=0){
                    ans=-1;
                    break;
                }
                else s=s*2;
                ans++;
            }
            cout<<ans<<endl;
        
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        if(c=='g')cout<<0<<endl;
        else{
            int ind=0;
            int ans=0;
            bool b=false;
            string k=s+s;
            for(int i=n*2-1;i>=0;i--){
                if(k[i]=='g'){
                    ind=i;
                    b=1;
                }
                else if(k[i]==c && b){
                    ans=max(ans,ind-i);
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
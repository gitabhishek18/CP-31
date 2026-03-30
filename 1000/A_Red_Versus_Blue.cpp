#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n,r,b;
        cin>>n>>r>>b;
        int cnt;//=(r+b+1-1)/(b+1);
        int r1=r;
        int b1=b;
        string s="";
        int t=0;
        for(int i=0;i<n;i++){
            t=0;
            cnt=(r1+b1+1-1)/(b1+1);
            
            while(i<n && t<cnt){
                s=s+'R';
                r1--;
                i++;
                t++;
            }
            if(i>=n)break;
            s=s+'B';
            b1--;
        }
        cout<<s<<endl;
    }

    return 0;
}
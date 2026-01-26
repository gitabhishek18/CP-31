#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int nr,nc;
        int kr,kc;
        int qr,qc;
        cin>>nr>>nc>>kr>>kc>>qr>>qc;
        int ans=0;
        int n=8;
        int dirr[8]={nr,nr,-nr,-nr,nc,-nc,nc,-nc};
        int dirc[8]={nc,-nc,nc,-nc,nr,nr,-nr,-nr};
        if(nr==nc){
            n=4;
        }
        for(int i=0;i<n;i++){
            int newr=kr+dirr[i];
            int newc=kc+dirc[i];
            for(int k=0;k<n;k++){
                int newr2=newr+dirr[k];
                int newc2=newc+dirc[k];
                if(newr2==qr && newc2==qc){
                    ans++;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
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
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        bool flag=true;
        for(int i=1;i<n-1;i++){
            int k=-1;
            int l=-1;
            for(int lef=i;lef>=0;lef--){
                if(p[lef]<p[i]){
                    k=lef;
                    break;
                }
            }
            for(int rt=i;rt<n;rt++){
                if(p[rt]<p[i]){
                    l=rt;
                    break;
                }
            }
            if(k!=-1 && l!=-1){
                cout<<"YES"<<endl;
                flag=false;
                cout<<k+1<<" "<<i+1<<" "<<l+1<<endl;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
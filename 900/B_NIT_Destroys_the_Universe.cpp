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
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                while(i<n && a[i]!=0){
                    i++;
                }
                c++;
            }
        }
        if(c==1)cout<<1<<endl;
        if(c==0)cout<<0<<endl;
        if(c>=2)cout<<2<<endl;
    }
    
    return 0;
}
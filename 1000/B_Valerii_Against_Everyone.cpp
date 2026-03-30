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
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool c=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(b[i]==b[j]){
                    c=true;
                    break;
                }
            }
        }
        if(c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int num_0=0;
        int num_1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')num_0++;
            else num_1++;
        }
        int m=min(num_0,num_1);
        if(m%2!=0)cout<<"DA"<<endl;
        else cout<<"NET"<<endl;

        
    }

    return 0;
}
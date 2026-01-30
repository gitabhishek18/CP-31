#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin>>s;
        long long c_0=0;
        long long c_1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0'==0)c_0++;
            else c_1++;
        }
        if(c_0==c_1)cout<<0<<endl;
        else{
            for(int i=0;i<s.size();i++){
                //if(c_0==0 || c_1==0)break;
                if(s[i]-'0'==0){
                    if(c_1>0)
                    c_1--;
                    else break;
                }
                else {
                    if(c_0>0)
                    c_0--;
                    else break;
                }
            }
            cout<<c_0+c_1<<endl;
        }
    }

    return 0;
}
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
        string s;
        cin>>s;
        int sum=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            sum=sum+((s[i]=='(')?1:-1);
            if(sum<0 && s[i]==')'){
                ans++;
                sum=0;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
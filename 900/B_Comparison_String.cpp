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
        string s;
        cin>>s;
        int cnt=1;
        int maxi=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])cnt++;
            else{
                cnt=1;
            }
            maxi=max(cnt,maxi);
        }
        cout<<max(maxi,cnt)+1<<endl;
    }

    return 0;
}
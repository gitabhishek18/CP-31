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
        if(s[0]!=s[s.size()-1])s[0]=s[s.size()-1];
        cout<<s<<endl;
    }

    return 0;
}
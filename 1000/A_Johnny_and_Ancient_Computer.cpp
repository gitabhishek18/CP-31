#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long a,b;
        cin>>a>>b;
        long long c,d;
        c=max(a,b);
        d=min(a,b);
        if(c%d){cout<<-1<<endl;continue;}
        long long g=c/d;
        if (g <= 0 || (g & (g - 1))) {
            cout << -1 << "\n";
            continue;
        }
        if(g==1){cout<<0<<endl;continue;}
        long long ch=log(g)/log(8);
        long long lef=g>>3*ch;
        if(lef==1)cout<<ch<<endl;
        else cout<<ch+1<<endl;
    }

    return 0;
}
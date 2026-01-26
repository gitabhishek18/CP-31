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
        long long dif=abs(a-b);
        long long steps=(dif!=0)?min(b % dif, dif - b % dif):1;
        if(a==b)cout<<0<<' '<<0<<endl;
        else cout<<dif<<' '<<steps<<endl;
    }

    return 0;
}
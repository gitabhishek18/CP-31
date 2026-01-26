#include <bits/stdc++.h>
using namespace std;
#include<cmath>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin>>n;
        bool b=false;
        if(n%2==0 && (n & (n-1))==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
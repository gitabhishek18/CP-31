#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long x,y,k;
        cin>>x>>y>>k;
        
        long long need=y*k + k-1;
        long long g=x-1;

        cout<<(((need+g-1)/(g))+k)<<endl;
    }

    return 0;
}
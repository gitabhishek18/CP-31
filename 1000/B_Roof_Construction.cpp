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
        n--;
        int k=log2(n);
        for(long long i=(1<<k)-1;i>=0;i--){
            cout<<i<<' ';
        }
        for(long long i=(1<<k);i<=n;i++){
            cout<<i<<' ';
        }
        cout<<endl;
    }

    return 0;
}
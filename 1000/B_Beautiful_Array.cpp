#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long n,k,b;
        long long s;
        cin>>n>>k>>b>>s;
        long long mi = (k * b);
		long long ma = (k * b) + (k - 1) * n;
        if(mi>s ||  ma<s)cout<<-1<<endl;
        else{
            vector<long long> a(n,0);
            
            a[0]=mi;
            s-=mi;
            for(int i=0;i<n;i++){
                long long add=min(k-1,s);
                a[i]+=add;
               s-=add;
            }
            for(int i=0;i<n;i++){
                cout<<a[i]<<' ';
            }
            cout<<endl;
        }
        
    }

    return 0;
}
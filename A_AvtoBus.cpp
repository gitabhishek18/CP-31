#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin>>n;
        if( n<4 || n%2!=0)cout<<-1<<endl;
        else{
            long long max=n/4;
            long long min=n/6;
            int rem=n%6;
            if(rem!=0)min+=1;
            cout<<min<<' '<<max<<endl;
        }


    }

    return 0;
}
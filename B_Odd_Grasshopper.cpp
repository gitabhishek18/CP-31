#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        long long x;
        cin>>x>>n;
        if(x%2==0){
            long long rem=n%4;
            if(rem==0)cout<<x<<endl;
            else if(rem==2)cout<<x+1<<endl;
            else if(rem==1)cout<<x-n<<endl;
            else if(rem==3)cout<<x+n+1<<endl;
        }
        else{
            long long rem=n%4;
            if(rem==0)cout<<x<<endl;
            else if(rem==2)cout<<x-1<<endl;
            else if(rem==1)cout<<x+n<<endl;
            else if(rem==3)cout<<x-n-1<<endl;
        }
    }

    return 0;
}
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
        while(true){
            long long k=n;
            bool b=false;
            while(k!=0){
                int rem=k%10;
                if(rem!=0){
                    if(n%rem!=0){
                        b=true;
                        break;
                    }
                }
                k=k/10;
            }
            if(!b){
                cout<<n<<endl;
                break;
            }
            n++;
        }
        
    }

    return 0;
}
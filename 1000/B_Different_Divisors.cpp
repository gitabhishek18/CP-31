#include <bits/stdc++.h>
using namespace std;
static vector<bool> vec;
void seive(int n){
    vec.resize(n+1,true);
    vec[0]=vec[1]=true;
    for(int i=2;1ll*i*i<=n;i++){
        if(vec[i]){
            for(int j=i*i;j<=n;j+=i){
                vec[j]=false;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    seive(200000);
    int T;
    cin >> T;
    while (T--) {
        int d;
        cin>>d;
        int p;
        int q;
        for(int i=d+1;i<200000;i++){
            if(vec[i]){
                p=i;
                break;
            }
        }
        for(int i=d+p;i<200000;i++){
            if(vec[i]){
                q=i;
                break;
            }
        }
        //cout<<p<<' '<<q<<endl;
        cout<<1ll*p*q<<endl;
    }

    return 0;
}
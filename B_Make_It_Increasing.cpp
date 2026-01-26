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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        bool b=false;
        for(int i=n-1;i>0;i--){
            if(a[i]==0){
                b=true;
                break;
            }
            if(a[i]>a[i-1]){
                continue;
            }
            else{
                while(a[i]<=a[i-1]){
                    a[i-1]=a[i-1]/2;
                    //cout<<a[i-1]<<" ";
                    cnt++;
                    if(i-1 !=0 && a[i-1]==0){
                        b=true;
                        break;
                    }
                }
            }
            if(a[i]==0){
                b=true;
                break;
            }
        }
        if(b)cout<<-1<<endl;
        else cout<<cnt<<endl;
    }

    return 0;
}
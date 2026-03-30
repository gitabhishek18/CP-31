#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long w,h;
        cin>>w>>h;
        int k;

        cin>>k;
        vector<int> hori0(k);
        for(int i=0;i<k;i++){
            cin>>hori0[i];
        }


        cin>>k;
        vector<int> horih(k);
        for(int i=0;i<k;i++){
            cin>>horih[i];
        }


        cin>>k;
        vector<int> verti0(k);
        for(int i=0;i<k;i++){
            cin>>verti0[i];
        }


        cin>>k;
        vector<int> vertiw(k);
        for(int i=0;i<k;i++){
            cin>>vertiw[i];
        }
        long long ans=INT_MIN;
        long long a=1ll*max(horih[horih.size()-1]-horih[0],hori0[hori0.size()-1]-hori0[0]);
        long long b=1ll*max(vertiw[vertiw.size()-1]-vertiw[0],verti0[verti0.size()-1]-verti0[0]);
        cout<<max(a*h,b*w)<<endl;
    }

    return 0;
}
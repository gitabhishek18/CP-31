#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n,p;
        cin>>n>>p;
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            a[i]={k,i+1};
        }
        //sort(a.begin(),a.end());
        for(int i=n-1;i>=0;i--){
            if(a[i].first>p){
                if(a[i].first%p)a[i].first=(a[i].first%p);
                else a[i].first=p;
            }
        }
        sort(a.begin(),a.end(),[](pair<int,int>& l,pair<int,int>& b){
            if(l.first==b.first)return l.second>b.second;
            return l.first<b.first;
            }
        );
        for(int i=n-1;i>=0;i--){
            cout<<a[i].second<<" ";
        }
        cout<<endl;
    }

    return 0;
}
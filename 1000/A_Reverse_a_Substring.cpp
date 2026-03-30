#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin>>n>>s;
    string a=s;
    sort(a.begin(),a.end());
    if(a==s){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++){
            if (s[i] > s[i + 1]) {
                cout << i + 1 << " " << i + 2 << "\n";
                return 0;
            }
        }
    }
    return 0;
}
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
            vector<int> s(n);
            for(int i=0;i<n;i++)cin>>s[i];
            vector<int> ans(n);
            int i=0;
            bool ch=true;
            while(i<n){
                int j=i;           
                while(i+1<n && s[i]==s[i+1]){  
                    ans[i]=i+2;  
                    i++;
                    
                }
                if(i==j){ch=false;break;}
                ans[i]=j+1;
                i++;
            }
            if(!ch)cout<<-1<<endl;
            else
            {for(int i=0;i<n;i++){
                cout<<ans[i]<<' ';
            }
            cout<<endl;}
    }

    return 0;
}
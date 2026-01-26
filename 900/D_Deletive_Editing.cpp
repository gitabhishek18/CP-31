    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int T;
        cin >> T;
        while (T--) {
            string s;
            string n;
            cin>>s;
            cin>>n;
            unordered_map<char,int> mp;
            for(int i=0;i<n.size();i++){
                mp[n[i]]++;
            }  
            for(int i=s.size()-1;i>=0;i--){
                if(mp.find(s[i])!=mp.end() && mp[s[i]]!=0){
                    mp[s[i]]--;
                }
                else{
                    s[i]='.';
                }
            }
            bool b=false;
            int j=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='.')continue;
                if(s[i]==n[j]){
                    j++;
                }
                else{
                    b=true;
                    
                }
            }
            if(b)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        return 0;
    }
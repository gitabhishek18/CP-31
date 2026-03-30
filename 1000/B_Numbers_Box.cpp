#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> grid(n,vector<int>(m,0));
        int sum=0;
        int cnt=0;
        int mine=1e3;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                sum+=abs(grid[i][j]);
                mine=min(mine,abs(grid[i][j]));
                if(grid[i][j]<0){
                    cnt++;
                }
            }
        }
        if(cnt%2==0)cout<<sum<<endl;
        else{
            sum=sum-2*mine;
            cout<<sum<<endl;
        }
    }

    return 0;
}
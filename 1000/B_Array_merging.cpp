#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        unordered_map<int,int> mp1, mp2;

        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;
            mp1[a[i]] = max(mp1[a[i]], j - i);
            i = j;
        }

        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && b[j] == b[i]) j++;
            mp2[b[i]] = max(mp2[b[i]], j - i);
            i = j;
        }

        int ans = 0;
        for (auto &p : mp1)
            ans = max(ans, p.second + mp2[p.first]);

        for (auto &p : mp2)
            ans = max(ans, p.second + mp1[p.first]);
        cout << ans << endl;
    }
    return 0;
}

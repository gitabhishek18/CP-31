#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        int mn = a[0], mx = a[0];

        for (int i = 1; i < n; i++) {
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);

            if (mx - mn > 2 * x) {
                ans++;
                mn = mx = a[i];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

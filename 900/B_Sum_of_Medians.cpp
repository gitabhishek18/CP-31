#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n * k);
        for (long long i = 0; i < n * k; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        long long l = n * k;   

        while (k--) {
            l -= (n / 2 + 1);
            ans += a[l];       
        }

        cout << ans << endl;
    }

    return 0;
}

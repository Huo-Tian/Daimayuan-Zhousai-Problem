#include <bits/stdc++.h>
using namespace std;

int n, a[5010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int ans = n;
    for(int l = 1; l <= n; l ++) {
        for(int r = l + 1; r <= n; r ++) {
            int ma = INT_MIN, mi = INT_MAX;
            for(int i = l; i <= r; i ++) {
                ma = max(ma, a[i]);
                mi = min(mi, a[i]);
            }
            if(ma % mi == 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
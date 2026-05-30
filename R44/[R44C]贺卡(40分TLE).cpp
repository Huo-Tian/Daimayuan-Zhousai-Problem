#include <bits/stdc++.h>
using namespace std;

int n, q;
int a[200010], b[200010];

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        b[i] = abs(a[i] - a[i - 1]);
    }
    int l, r;
    for(; q--; ) {
        cin >> l >> r;
        long long ans = (r - l + 1) * 2 + a[l] + a[r];
        //cout << ans << " ";
        for(int i = l + 1; i <= r; i ++) {
            ans += b[i];
        }
        cout << ans << endl;
    }
}
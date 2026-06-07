#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, q;
ll a[300010];
ll l, r;

int main() {
    cin >> n >> q;
    for(ll i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(; q--; ) {
        cin >> l >> r;
        ll ans = 0;
        for(ll i = l; i <= r; i ++) {
            for(ll j = l; j <= r; j ++) {
                ans += (a[i] ^ a[j]);
            }
        }
        cout << ans << " ";
    }
}
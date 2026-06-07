#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, m;
ll a[1001000];

bool cmp(ll x, ll y) {
    return x > y;
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, cmp);
    ll ans = LLONG_MAX;
    for(int i = 1; i <= m; i ++) {
        ans = min(ans, a[i] * a[2 * m + 1 - i]);
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;
ll a[100100];
ll cnt[4020];

int main() {
    cin >> n;
    for(ll i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    ll ans = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = i + 1; j <= n; j ++) {
            ans += cnt[a[i] + a[j]];
        }
        for(int j = 1; j < i; j ++) 
            cnt[a[i] + a[j]]++;
    }
    cout << ans << endl;
}
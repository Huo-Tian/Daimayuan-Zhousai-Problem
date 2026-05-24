#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll P = 998244353;
ll n;
ll ans = 0LL;

ll gcd(ll a, ll b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

ll jc(ll x) {
    ll sum = 1;
    for(ll i = 1; i <= x; i++) {
        sum *= i;
        sum %= P;
    }
    return sum;
}

ll zh(ll x, ll y) {
    ll nj, mj;
    nj = jc(x), mj = jc(y) * jc((x - y));
    if(nj >= 1 && mj >= 1) {
        return (nj / mj) * 1LL;
    }
    return 0LL;
}

int main() {
    cin >> n;
    for(ll i = 1; i <= n; i ++) {
        for(ll j = 1; j <= i; j ++) {
            ans += lcm(i, j) * zh(i, j);
            ans %= P;
        }
    }
    cout << ans << endl;    
}
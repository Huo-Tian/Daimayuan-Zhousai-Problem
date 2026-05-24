#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, q, x;
ll a[1000010], b[500010];
ll ma = 0;
ll ans[1000100];

int main(){
    scanf("%lld", &n);
    for(int i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
        b[a[i]]++;
        ma = max(ma, a[i]);
    }
    for(int i = 1; i <= ma; i ++) {
        for(int j = i; j <= ma; j += i) {
            ans[i] += b[j];
        }
    }
    scanf("%lld", &q);
    for(; q--; ){
        scanf("%lld", &x);
        printf("%lld\n", ans[x]);
    }
}
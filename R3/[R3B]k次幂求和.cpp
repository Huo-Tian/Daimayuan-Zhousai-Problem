#include <bits/stdc++.h>
using namespace std;

const int P = 998244353;
int n, k, a[101];
long long ans;

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) {
        long long t = 1;
        for(int j = 1; j <= k; j++){
            t *= a[i];
            t %= P;
        }
        a[i] = t;
    }
    for(int i = 1; i <= n; i++)
        ans += a[i];
    printf("%lld\n", ans % P);
}
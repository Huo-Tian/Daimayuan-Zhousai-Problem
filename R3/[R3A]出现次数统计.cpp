#include <bits/stdc++.h>
using namespace std;

long long n, x;
long long a[1000001], ans = 0;

int main() {
    scanf("%lld%lld", &n, &x);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        if (a[i] == x) {
            ans ++;
        }
    }
    printf("%lld\n", ans);
}
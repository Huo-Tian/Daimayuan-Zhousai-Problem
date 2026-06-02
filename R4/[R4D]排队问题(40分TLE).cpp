#include <bits/stdc++.h>
using namespace std;

long long n, a[1000010], b[1000100], m;

int main() {
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i <= n; i++) {
        long long ans = 0;
        m = 0;
        for (int j = 1; j <= n; j++) {
            if (j == i)
                continue;
            else
                b[++m] = a[j];
        }
        sort(b + 1, b + m + 1);
        for (int j = 1; j <= m - 1; j ++) {
            ans += (m - j) * b[j];
        }
        printf("%lld\n", ans);
    }
}
#include <bits/stdc++.h>
using namespace std;

int T, n, a[100010];

int main() {
    scanf("%d", &T);
    while (T--) {
        memset(a, 0, sizeof(a));
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a + 1, a + n + 1);
        
        long long ans = 0;
        for (int i = 2; i <= n; i++) {
            if (a[i] <= a[i - 1]) {
                int diff = a[i - 1] - a[i] + 1;
                a[i] += diff;
                ans += diff;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, a[100010], ans;
bool b[100010];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if(!b[i] && !b[j] && (a[i] + a[j]) % 2 == 0) {
                ans ++;
                b[i] = b[j] = true;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
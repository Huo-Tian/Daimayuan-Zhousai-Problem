#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int n, x, a[N + 10], b[N + 10], ans = 0;

int main() {
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }
    for (int i = 1; i <= n; i ++) {
        if (a[i] == x || b[i] == x) {
            ans ++;
        }
    }
    printf("%d\n", ans);
}
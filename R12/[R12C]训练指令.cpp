#include <bits/stdc++.h>
using namespace std;

int a[1000010], vis[1000010];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        a[i] = n - i + 1;
    }
    while (m--) {
        int x;
        scanf("%d", &x);
        a[++n] = x;
    }
    for (int i = n; i >= 1; i--) {
        if (!vis[a[i]]) {
            printf("%d ", a[i]);
            vis[a[i]] = 1;
        }
    }
}
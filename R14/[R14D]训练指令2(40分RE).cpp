#include <bits/stdc++.h>
using namespace std;

int n, m, q;
int a[2010][2010], cnt = 0;

int main() {
    scanf("%d %d %d", &n, &m, &q);
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j ++) {
            a[i][j] = ++cnt;
        }
    }
    for (int i = 1; i <= q; i ++) {
        int opt, x, y;
        scanf("%d%d%d", &opt, &x, &y);
        if (opt == 1) {
            for (int j = 1; j <= m; j ++) {
                swap(a[x][j], a[y][j]);
            }
        } else if (opt == 2) {
            for (int j = 1; j <= n; j ++) {
                swap(a[j][x], a[j][y]);
            }
        } else {
            printf("%d\n", a[x][y]);
        }
    }
}
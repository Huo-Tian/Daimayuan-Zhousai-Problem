#include <bits/stdc++.h>
using namespace std;

int n, m;
int opt, pre[27], suf[27];
char c, s[100001][1001];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i ++) {
        scanf("%s", s[i] + 1);
    }
    for (int i = 1; i <= m; i ++) {
        scanf("%d ", &opt);
        if (opt == 1) {
            scanf("%c", &c);
            pre[c - 'a' + 1] += 1;
        } else {
            scanf("%c", &c);
            suf[c - 'a' + 1] += 1;
        }
    }
    for (int i = 1; i <= n; i ++) {
        int x = s[i][1] - 'a' + 1, y = s[i][strlen(s[i] + 1)] - 'a' + 1;
        int ans = pre[x] + suf[y];
        printf("%d ", ans);
    }
}
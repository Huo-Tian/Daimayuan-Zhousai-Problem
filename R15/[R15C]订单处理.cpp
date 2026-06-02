#include <bits/stdc++.h>
using namespace std;

int n, b[100010], cnt;

struct Info {
    int a, t, p;
} info[100001];

bool cmp(const Info &a, const Info &b) {
    return a.a < b.a;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d %d", &info[i].a, &info[i].t);
        info[i].p = i;
    }
    sort(info + 1, info + n + 1, cmp);
    int x = 0;
    for (int i = 1; i <= n; ++i) {
        if (info[i].a >= x) {
            x = info[i].a + info[i].t;
        } else {
            b[++cnt] = info[i].p;
        }
    }
    if (!cnt) {
        printf("Perfect\n");
    } else {
        sort(b + 1, b + cnt + 1);
        for (int i = 1; i <= cnt; ++i) {
            printf("%d ", b[i]);
        }
    }
    return 0;
}
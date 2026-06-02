#include <bits/stdc++.h>
using namespace std;

int n, m, a[1010];

void moreone(int x) {
    int cnt = 0;
    while (x >= 10) {
        a[++cnt] = 9;
        x -= 9;
    }
    a[++cnt] = x;
    for (int i = 1; i <= n; i++) {
        printf("%d", a[i]);
    }
}
int main() {
    scanf("%d%d", &n, &m);
    if (m <= 9) {
        printf("%d", m);
        for (int i = 1; i <= n - 1; i ++)
            printf("0");
        return 0;
    } else {
        moreone(m);
    }
}
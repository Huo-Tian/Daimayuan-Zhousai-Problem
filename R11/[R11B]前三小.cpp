#include <bits/stdc++.h>
using namespace std;

struct number {
    int val;
    int cnt;
}a[1000010];

int n;
bool cmp1(number a, number b) {
    return a.val < b.val;
}
bool cmp2(number a, number b) {
    return a.cnt < b.cnt;
}
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i].val);
        a[i].cnt = i;
    }
    sort(a + 1, a + n + 1, cmp1);
    sort(a + 1, a + 3 + 1, cmp2);
    for (int i = 1; i <= 3; i++) {
        printf("%d ", a[i].val);
    }
}
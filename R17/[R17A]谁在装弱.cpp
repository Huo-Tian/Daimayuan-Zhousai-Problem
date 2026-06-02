#include <bits/stdc++.h>
using namespace std;

const int P = 1000000;
int n, a[100010], b[100010];
int ans = 0;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i ++) {
        b[i] = a[i] + 10;
    }
    for (int i = 1; i <= n; i ++) {
        if (b[i] <= P){
            if (i == 1) {
                ans ++;
            } else
                if (b[i] <= a[i - 1]) {
                    ans ++;
                }
        }
    }
    printf("%d\n", ans);
}
#include <bits/stdc++.h>
using namespace std;

int n, a[10001], ans;

int main () {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] == j && a[j] == i)
                ans ++;
        }
    }
    printf("%d\n", ans);
}
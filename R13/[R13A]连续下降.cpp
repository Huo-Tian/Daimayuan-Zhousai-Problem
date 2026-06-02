#include <bits/stdc++.h>
using namespace std;

int n, a[100001], ans;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n - 2; i++) {
        if (a[i] > a[i + 1] && a[i] > a[i + 2] && a[i + 1] > a[i + 2])
            ++ans;
    }
    printf("%d\n", ans);
}
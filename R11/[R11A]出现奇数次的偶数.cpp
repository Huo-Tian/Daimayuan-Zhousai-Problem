#include <bits/stdc++.h>
using namespace std;

int n, a[10001];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        a[x] ++;
    }
    for(int i = 1000; i >= 0; i -= 2)
        if (a[i] % 2 == 1 && a[i] > 0){
            printf("%d\n", i);
            return 0;
        }
    printf("-1\n");
}
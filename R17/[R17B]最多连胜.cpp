#include <bits/stdc++.h>
using namespace std;

int n, ans;
char s[1000010];

int main() {
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i ++) {
        scanf("%c", &s[i]);
    }
    int l = 0;
    for (int i = 1; i <= n; i ++) {
        if (s[i] == 'W') {
            l ++;
        } else {
            l = 0;
        }
        //printf("%d\n", l);
        if (l > ans) {
            ans = l;
        }
    }
    printf("%d\n", ans);
}
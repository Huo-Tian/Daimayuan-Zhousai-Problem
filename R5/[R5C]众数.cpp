#include <bits/stdc++.h>
using namespace std;

const int N = 1E6;
const int NA = 1E7;
int n, a[N + 1], b[N + 1];
int sa[NA + 1], sb[N + 1];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++) {
        scanf("%d", &a[i]);
        sa[a[i]] ++;
    }
    for(int i = 1; i <= n; i ++) {
        b[i] = sa[a[i]];
        sb[b[i]] ++;
    }
    int ans = 0;
    for(int i = 1; i <= n; i ++) {
        if(sb[i] >= sb[ans]){
            ans = i;
        }
    }
    printf("%d\n", ans);
}
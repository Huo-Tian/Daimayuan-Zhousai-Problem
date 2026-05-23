#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001], q, x;

int main(){
    scanf("%lld", &n);
    for(int i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
    }
    scanf("%lld", &q);
    for(int i = 1; i <= q; i ++){
        scanf("%lld", &x);
        long long ans = 0;
        for(int j = 1; j <= n; j ++){
            if(a[j] % x == 0){
                ans ++;
            }
        }
        printf("%lld\n", ans);
    }
}
#include <bits/stdc++.h>
using namespace std;
long long n, a[100001];
long long ans;
int main(){
    scanf("%lld", &n);
    for(long long i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
    }
    for(long long i = 1; i <= n; i ++){
        ans += a[i] * i * (n - i + 1) * 1LL;
    }
    printf("%lld", ans);
}
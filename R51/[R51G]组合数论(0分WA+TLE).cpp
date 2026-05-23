#include <bits/stdc++.h>
using namespace std;

const long long P = 998244353;
long long n;
long long ans = 0;

long long gcd(long long a, long long b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

long long jc(long long x) {
    long long sum = 1;
    for(long long i = 1; i <= x; i++) {
        sum *= i;
        sum %= P;
    }
    return sum;
}

long long cbl(long long m, long long n) {
    if(m > n || m < 0) return 0;
    long long jcn = jc(n), jcm = jc(m) * jc(n - m);
    return jcn / jcm;
}

int main() {
    cin >> n;
    for(long long i = 1; i <= n; i ++) {
        for(long long j = 1; j <= i; j ++) {
            ans += lcm(i, j) * cbl(i, j);
            ans %= P;
        }
    }
    cout << ans << endl;    
}
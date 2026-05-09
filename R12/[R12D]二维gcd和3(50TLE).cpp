#include <bits/stdc++.h>
using namespace std;

const int P = 998244353;

int gcd(int a, int b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

int n, ans;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            ans += gcd(gcd(i, n), gcd(j, n)) % P;
            ans %= P;
        }
    }
    printf("%d\n", ans);
}
/*
#include <bits/stdc++.h>
using namespace std;

const int P = 998244353;

int gcd(int a, int b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

int n;
long long ans;
int f[300110];
vector<int> ys;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        int x = gcd(i, n);
        f[x]++;
        ys.push_back(x);
    }
    int ysl = ys.size();
    for (int i = 0; i < ysl; i ++) {
        for (int j = 0; j < ysl; j ++) {
            if (i != j)
                ans += (gcd(ys[i], ys[j]) * f[ys[i]] * f[ys[j]]) % P;
        }
    }
    printf("%lld\n", ans);
}
 */
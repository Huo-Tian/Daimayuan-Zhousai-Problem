#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int P = 998244353;

ll gcd(int a, int b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

int n;
long long ans = 0;
vector<ll> p;
ll f[3000010];
bool flag[3000010];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++) {
        int gi = gcd(i, n);
        f[gi]++;
        if(!flag[gi]) {
            p.push_back(gi);
            flag[gi] = true;
            //cout << gi << " ";
        }
    }
    //cout << endl;
    int l = p.size();
    for(int x = 0; x < l; x ++) {
        for(int y = 0; y < l; y ++) {
            int yx = p[x], yy = p[y];
            ans += gcd(yx, yy) * f[yx] * f[yy];
            ans %= P;
        }
    }
    printf("%lld\n", ans % P);
}
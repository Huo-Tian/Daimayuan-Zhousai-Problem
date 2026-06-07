#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, m, q;
ll c[1000010], r[1000010];

int main() {
    scanf("%lld %lld %lld", &n, &m, &q);
    for (int i = 1; i <= n; i ++) {
        r[i] = i;
    }
    for (int j = 1; j <= m; j ++) {
        c[j] = j;
    }
    for(; q --; ) {
        int opt, x, y;
        cin >> opt >> x >> y;
        if(opt == 1) {
            swap(r[x], r[y]);
        } else if(opt == 2) {
            swap(c[x], c[y]);
        } else if(opt == 3) {
            cout << (r[x] - 1) * m + c[y] << "\n";
        }
    }
}
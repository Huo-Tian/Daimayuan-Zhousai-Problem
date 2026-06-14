#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, q;
int a[200010];
int opt, t, x, v;
ll  val[200010], last[200010];

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        val[i] = a[i];
        last[i] = 0;
    }
    for (; q--; ) {
        cin >> opt >> t >> x;
        val[x] = max(0LL, val[x] - (t - last[x]));
        last[x] = t;
        if (opt == 1) {
            cin >> v;
            val[x] += v;
        } else {
            cout << val[x] << endl;
        }
    }
}
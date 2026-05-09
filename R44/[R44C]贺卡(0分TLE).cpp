#include <bits/stdc++.h>
using namespace std;

int n, q;
int a[200010];

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int l, r;
    for(; q--; ) {
        cin >> l >> r;
        long long ans = 0, cnt = 0;
        for(int i = l; i <= r; i ++, cnt++) {
            if(i == l) {
                ans += a[i];
                ans += abs(a[i] - a[i + 1]);
            } else if(i == r) {
                ans += a[i];
            } else {
                ans += abs(a[i] - a[i + 1]);
            }
        }
        cout << ans + cnt * 2 << endl;
    }
}
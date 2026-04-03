#include <bits/stdc++.h>
using namespace std;

int n, q, k;
int a[50010];
int l, r;

int main() {
    cin >> n >> q >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for( ;q --;) {
        cin >> l >> r;
        int ma, mi;
        ma = INT_MIN, mi = INT_MAX;
        for(int i = l; i <= r; i ++) {
            ma = max(ma, a[i]);
            mi = min(mi, a[i]);
        }
        if(ma - mi <= k) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
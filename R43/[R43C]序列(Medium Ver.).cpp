#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2147483647, MINN = -2147483648, N = 5010;

int n, k, a[N];
int ma[N][N], mi[N][N];

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= n; j ++) {
            ma[i][j] = MINN, mi[i][j] = MAXN;
        }
    }
    for(int l = 1; l <= n; l ++) {
        for(int r = l; r <= n; r ++) {
            if(l == r) {
                ma[l][r] = mi[l][r] = a[r];
            } else {
                ma[l][r] = max(ma[l][r - 1], a[r]);
                mi[l][r] = min(mi[l][r - 1], a[r]);
            }
        }
    }
    int ans = 0;
    for(int l = 1; l <= n; l ++) {
        for(int r = l; r <= n; r ++) {
            //cout << ma[l][r] << " " << mi[l][r] << " " << l << "," << r << " ";
            if(ma[l][r] - mi[l][r] <= k) {
                ans ++;
            }
        }
    }
    cout << ans << endl;
}
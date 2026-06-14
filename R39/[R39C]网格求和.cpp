#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
ll a[2010][2010];
ll h[2010], l[2010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            h[i] += a[i][j];
            l[j] += a[i][j];
        }
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cout << h[i] + l[j] - a[i][j] << " ";
        }
        cout << "\n";
    }
}
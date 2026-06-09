#include <bits/stdc++.h>
using namespace std;

int n, a[1010][1010], m;
int b[1010][1010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            b[i][j] = a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1];
            cnt = max(cnt, b[i][j]);
        }
    }
    cout << cnt << endl;
}
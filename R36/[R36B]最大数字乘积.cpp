#include <bits/stdc++.h>
using namespace std;

int n, a[1020][1020];

int main() {
    cin >> n;
    for (int i = 2; i <= n + 2; i++) {
        for (int j = 2; j <= n + 2; j++) {
            a[i][j] = 1;
        }
    }
    for(int i = 2; i <= n + 1; i ++) {
        for(int j = 2; j <= n + 1; j ++) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for(int i = 2; i <= n + 1; i ++){
        for(int j = 2; j <= n + 1; j++) {
            ans = max(ans, a[i][j] * a[i - 1][j] * a[i + 1][j]);
            ans = max(ans, a[i][j] * a[i][j + 1] * a[i][j - 1]);
            ans = max(ans, a[i - 1][j - 1] * a[i][j] * a[i + 1][j + 1]);
            ans = max(ans, a[i][j] * a[i + 1][j - 1] * a[i - 1][j + 1]);
        }
    }
    cout << ans << endl;
}
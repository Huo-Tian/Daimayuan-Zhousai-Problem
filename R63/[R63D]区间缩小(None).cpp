#include <bits/stdc++.h>
using namespace std;

int n, m;
int d[100010];
int dp[1010][1010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= m; i ++) {
        cin >> d[i];
    }
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= m; i ++) {
        for(int j = 0; j <= n; j ++) {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - d[i]];
        }
    }
    cout << dp[m][n] << endl;
}
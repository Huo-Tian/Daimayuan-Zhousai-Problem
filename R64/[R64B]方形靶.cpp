#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[1010][1010];
char at[1010][1010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    ll ans = 0L;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> at[i][j];
            if (at[i][j] == 'X')
                ans += a[i][j];
        }
    }
    cout << ans << endl;
}
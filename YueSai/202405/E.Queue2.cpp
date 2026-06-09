#include <bits/stdc++.h>
using namespace std;

int t, n, m, co;
int f[2010][2010], te[2010];

int main() {
    cin >> t;
    for(; t--; ) {
        cin >> n >> m;
        for(int i = 1; i <= n; i ++) {
            for(int j = 1; j <= m; j ++) {
                cin >> f[i][j];
            }
        }
        for(int i = 1; i <= n; i ++) {
            sort(f[i] + 1, f[i] + m + 1);
        }
        for(int i = 1; i <= m; i ++) {
            for(int j = 1; j <= n; j ++) {
                te[j] = f[j][i];
            }
            sort(te + 1, te + n + 1);
            for(int j = 1; j <= n; j ++) {
                f[j][i] = te[j];
            }
        }
        for(int i = 1; i <= n; i ++) {
            for(int j = 1; j <= m; j ++) {
                cout << f[i][j] << " ";
            }
            cout << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1010][1010];

int main() {
    cin >> n >> m;
    int ma = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i < n; i ++) {
        for(int j = 1; j < m; j ++) {
            ma = max(ma, a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1]);
        }
    }
    cout << ma << endl;
}
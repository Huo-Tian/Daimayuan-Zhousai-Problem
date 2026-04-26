#include <bits/stdc++.h>
using namespace std;

int t, N, M, n, m;
int a[40][40], b[40][40];

bool check(int x, int y) {
    for(int i = x, X = 1; X <= n; i ++, X++) {
        for(int j = y, Y = 1; Y <= m; j ++, Y++) {
            if(a[i][j] != b[X][Y]) {
                //cout << i << " " << j << " " << X << " " << Y << " " << a[i][j] << " " << b[X][Y] << endl;
                return false;
            }
        }
    }
    return true;
}

int main() {
    cin >> t;
    for(; t--; ) {
        cin >> N >> M;
        for(int i = 1; i <= N; i ++) {
            for(int j = 1; j <= M; j ++) {
                cin >> a[i][j];
            }
        }
        cin >> n >> m;
        for(int i = 1; i <= n; i ++) {
            for(int j = 1; j <= m; j ++) {
                cin >> b[i][j];
            }
        }
        bool flag = false;
        for(int i = 1; i <= N - n + 1; i ++) {
            for(int j = 1; j <= M - m + 1; j ++) {
                if(check(i, j)) {
                    cout << "Yes\n";
                    flag = true;
                    break;
                }
                //cout << endl;
            }
            if(flag == true) {
                break;
            }
        }
        if(!flag) {
            cout << "No\n";
        }
    }
}
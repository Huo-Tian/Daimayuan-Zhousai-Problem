#include <bits/stdc++.h>
using namespace std;

int n, m, k, cnt = 0;
char s[1100][1100];
struct Box {
    int x, y;
} a[10000010];

int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> s[i][j];
            if(s[i][j] >= 'A' && s[i][j] <= 'Z') {
                ++cnt;
                a[cnt].x = i, a[cnt].y = j;
            }
        }
    }
    for(int i = cnt; i; i --) {
        for(int j = a[i].x + 1; j <= n + 1; j ++) {
            if(s[j][a[i].y] != '.' || j == n + 1) {
                if(a[i].x + 1 == j) break;
                int d = j - a[i].x - 1;
                if(d <= k) {
                    s[j - 1][a[i].y] = s[a[i].x][a[i].y];
                    //cout << s[j - 1][a[i].y] << j - 1 << a[i].y << endl;
                    s[a[i].x][a[i].y] = '.';
                    break;
                } else {
                    s[j - 1][a[i].y] = '*';
                    s[a[i].x][a[i].y] = '.';
                    break;
                }
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cout << s[i][j];
        }
        cout << endl;
    }
}
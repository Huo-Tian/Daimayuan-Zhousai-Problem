#include <bits/stdc++.h>
using namespace std;

int n, m;
char s[1010][1010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> s[i][j];
        }
    }
    for(int t = 1; t <= 2; t ++) {
        for(int i = n; i >= 1; i --) {
            for(int j = 1; j <= m; j ++) {
                if(s[i][j] == '#' && s[i + 1][j] == '.') {
                    swap(s[i][j], s[i + 1][j]);
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
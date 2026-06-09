#include <bits/stdc++.h>
using namespace std;

int n, m;
int c[1100][1100];
struct Qinqi {
    int x, y;
    int jl = 0;
}a[1001001];
int cnt = 0, wwx, wwy;

bool cmp(Qinqi a, Qinqi b) {
    if(a.jl == b.jl && a.x == b.x) {
        return a.y > b.y;
    }
    if(a.jl == b.jl) {
        return a.x > b.x;
    }
    return a.jl > b.jl;
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> c[i][j];
            if(c[i][j] == 1) {
                a[++cnt].x = i;
                a[cnt].y = j;
            }
            if(c[i][j] == 2) {
                wwx = i;
                wwy = j;
            }
        }
    }
    for(int i = 1; i <= cnt; i ++) {
        a[i].jl = abs(wwx - a[i].x) + abs(wwy - a[i].y);
    }
    sort(a + 1, a + cnt + 1, cmp);
    cout << a[1].x << " " << a[1].y << endl;
}
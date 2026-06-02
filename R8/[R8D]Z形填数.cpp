#include <bits/stdc++.h>
using namespace std;

int n, a[4096][4096], cnt = 0;

void f(int x, int y, int m) {
    int m2 = 2;
    for (int i = 1; i <= m - 1; i ++)
        m2 *= 2;
    if (m > 0) {
        f(x, y, m - 1);
        f(x, y + m2, m - 1);
        f(x + m2, y, m - 1);
        f(x + m2, y + m2, m - 1);
    } else if(m == 0){
        a[x][y] = ++ cnt;
        return;
    }
}

int main() {
    scanf("%d", &n);
    f(1, 1, n);
    for (int i = 1; i <= 2048; i ++) {
        if (a[i][1] != 0) {
            for (int j = 1; j <= 2048; j++)
                if (a[i][j] != 0)
                    printf("%d ", a[i][j]);
            printf("\n");
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int n, m;
const int N = 3000;
int a[N + 10], b[N + 10];
bool flaga[N + 10], flagb[N + 10];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i ++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; i++) {
        scanf("%d", &b[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j ++) {
            if (a[i] < b[j]) {
                continue;
            } else if (flaga[i] == false && flagb[j] == false){
                flaga[i] = true;
                flagb[j] = true;
                break;
            }
        }
    }
    int x = 0;
    for (int i = 1; i <= m; i ++) {
        if (flagb[i] == true) {
            x++;
        }
    }
    printf("%d\n", x);
}
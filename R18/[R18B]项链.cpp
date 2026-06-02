#include <bits/stdc++.h>
using namespace std;

const int N = 3 * 1e5;
int n, m;
int a[N + 10];
bool b[N + 10];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i ++) {
        scanf("%d", &a[i]);
    }
    //sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i ++) {
        if (b[a[i]] == false) {
            printf("%d ",i);
            b[a[i]] = true;
        }
    }
    return 0;
}
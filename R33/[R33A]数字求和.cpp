#include <bits/stdc++.h>
using namespace std;

int n, c[10], l = INT_MAX, r = INT_MIN;
bool e[10];
int ans = 0;
int a, b, d;
inline void dfs(int x) {
    if (x > 3) {
        int x = 0;
        for (int i = 1; i <= 3; i++) {
            //printf("%d", c[i]);
            x = x * 10 + c[i];
        }
        ans += x;
        //printf("\n");
        return;
    }
    if (!e[a]) {
        e[a] = true;
        c[x] = a;
        dfs(x + 1);
        e[a] = false;
    }
    if (!e[b]) {
        e[b] = true;
        c[x] = b;
        dfs(x + 1);
        e[b] = false;
    }
    if (!e[d]) {
        e[d] = true;
        c[x] = d;
        dfs(x + 1);
        e[d] = false;
    }
}

int main() {
    scanf("%d", &n);
    int time = 0;
    while (n > 0) {
        if(time == 0) a = n % 10;
        else if(time == 1) b = n % 10;
        else if(time == 2) d = n % 10;
        time++;
        n /= 10;
    }
    memset(e, false, sizeof(e));
    dfs(1);
    cout << ans << endl;/*
    cout << n << endl;*/
}
#include <bits/stdc++.h>
using namespace std;

int n, a[100010];
int ans = 0;

bool XORsum(int x, int y) {
    int z = a[x];
    for(int i = x + 1; i <= y; i ++) {
        z = (z ^ a[i]);
    }
    return z;
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        for(int j = i; j <= n; j ++) {
            ans += XORsum(i, j);
        }
    }
    cout << ans << endl;
}
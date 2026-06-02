#include <bits/stdc++.h>
using namespace std;

int n, m, ans = 0;
int a[1000010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    for(int i = 1; i <= n; i ++)
        for(int j = i + 1; j <= n; j ++) 
            if(a[i] == a[j] && i % m == j % m) ans ++;
    cout << ans << endl;
}
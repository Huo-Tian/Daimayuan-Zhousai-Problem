#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, q;
int a[200010];
ll fd[200010], gd[200010];
int l, r;

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    fd[1] = (a[1] > a[2] ? 1 : 0);
    gd[1] = (a[1] < a[2] ? 1 : 0);
    for(int i = 2; i < n; i ++) {
        fd[i] = fd[i - 1] + (a[i] > a[i - 1] && a[i] > a[i + 1] ? 1 : 0);
        gd[i] = gd[i - 1] + (a[i] < a[i - 1] && a[i] < a[i + 1] ? 1 : 0);
    }
    fd[n] = fd[n - 1] + (a[n] > a[n - 1] ? 1 : 0);
    gd[n] = gd[n - 1] + (a[n] < a[n - 1] ? 1 : 0);
    for(; q--; ) {
        cin >> l >> r;
        if(l == r) cout << "0 0\n";
        else cout << fd[r - 1] - fd[l] << " " << gd[r - 1] - gd[l] << endl;
    }
}
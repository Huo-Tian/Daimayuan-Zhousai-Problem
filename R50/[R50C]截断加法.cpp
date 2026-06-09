#include <bits/stdc++.h>
#define N 200010
using namespace std;

int n, d, k;
int a[N], b[N];
int cnt = 0, req[N];

int main() {
    cin >> n >> d >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i ++) {
        cin >> b[i];
    }
    for(int i = 1; i <= n; i ++) {
        if(d >= b[i]) {
            req[++cnt] = max(0, b[i] - a[i]);
        }
    }
    if(cnt < k) {
        cout << -1 << endl;
        return 0;
    }
    sort(req + 1, req + cnt + 1);
    cout << req[k] << endl;
}
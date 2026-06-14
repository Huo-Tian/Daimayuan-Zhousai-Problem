#include <bits/stdc++.h>
using namespace std;

int n, l, r, a[1000010];
int s[1000010];

int main() {
    cin >> n >> l >> r;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] >= l && a[i] <= r) {
            s[i] = s[i - 1] + 1;
        } else {
            s[i] = s[i - 1];
        }
    } 
    int ans = 0, t = 0;
    int times = 0;
    for(int i = 1; i <= n; i ++) {
        if(s[i] > s[i - 1]) {
            ++t;
        } else {
            ans = max(t, ans);
            t = 0;
            times++;
        }
    }
    if(times == n) {
        cout << 0 << endl;
        return 0;
    }
    cout << ans << endl;
}
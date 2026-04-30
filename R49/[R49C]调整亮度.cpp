#include <bits/stdc++.h>
using namespace std;

int n, q;
int h[200010], a[200010];
int l, r;
long long s[200010], s2[200010];

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
        s2[i] = a[i] - a[i - 1];
    }
    for (int i = 1; i <= q; i++) {
        cin >> l >> r;
        s2[l] += 1;
        s2[r + 1] -= 1;
    }
    for (int i = 1; i <= n; i++) {
        s[i] = s[i - 1] + s2[i];
        //cout << s[i] << " ";
    }
    //cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << s[i] % h[i] << " ";
    }
}
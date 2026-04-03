#include <bits/stdc++.h>
using namespace std;

int n, a[100010];
string s;

int main() {
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0, j = n - 1; i < n && j >= 0; i ++, j --) {
        if (s[i] != s[j]) {
            if(a[i] < a[j]) {
                ans += a[i];
                s[i] = s[j];
            } else {
                ans += a[j];
                s[j] = s[i];
            }
        }
    }
    cout << ans << endl;
}
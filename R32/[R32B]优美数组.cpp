#include <bits/stdc++.h>
using namespace std;

int T, n, a[100010];
int b[100010];

int main() {
    cin >> T;
    for(; T--; ) {
        cin >> n;
        int ma = 0;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
            b[a[i]]++;
            if(b[a[i]] >= ma) ma = b[a[i]];
        }
        if((n - ma) >= ma) cout << 0 << endl;
        else cout << ma - (n - ma) - 1 << endl;
        for(int i = 1; i <= n; i ++) {
            b[a[i]] = 0;
        }
    }
}
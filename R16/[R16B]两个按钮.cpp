#include <bits/stdc++.h>
using namespace std;

long long f[100010];
int T, a, b, n, k, x = 1;
bool flag = false;

int main() {
    cin >> T;
    for(; T--; ) {
        x = 1;
        flag = false;
        cin >> a >> b >> n >> k;
        for(int i = 0; i <= n; i ++) {
            if(a * i + b * (n - i) == k) {
                flag = true;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
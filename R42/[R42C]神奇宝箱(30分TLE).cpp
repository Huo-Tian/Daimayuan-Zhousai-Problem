#include <bits/stdc++.h>
using namespace std;

int n;
const int P = 998244353;
long long ans = 0;

int main() {
    cin >> n;
    int cnt = 0, tc = 1, color = 1;
    for(int i = 1; i <= n; i ++) {
        ans += (long long)(i * color * 2); 
        cnt++;
        if(cnt == tc) {
            tc *= 2, color++;
            cnt = 0;
        }
        ans %= P;
    }
    cout << ans << endl;
}
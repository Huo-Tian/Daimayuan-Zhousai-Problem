#include <bits/stdc++.h>
using namespace std;

int n, k, ans = 0;

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        int sum = i / 100000 % 10 + i / 10000 % 10 + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10;
        if(sum % k == 0) {
            ans ++;
        }
    }
    cout << ans << endl;
}
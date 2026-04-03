#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[2000010];

int main() {
    cin >> n >> x;
    long long ans = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        if(x < a[i]) {
            ans += a[i] - x;
        } else if(a[i] < x && x - a[i] >= ans){
            ans = 0;
        } else if(a[i] < x && x - a[i] < ans) {
            ans -= x - a[i];
        }
    }
    cout << ans << endl;
}
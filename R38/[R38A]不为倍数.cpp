#include <bits/stdc++.h>
using namespace std;

int n, X, ans = 0;
int a[100010];

int main() {
    cin >> n >> X;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= X; i ++) {
        bool flag = true;
        for(int j = 1; j <= n; j ++) {
            if(i % a[j] == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            ans++;
        }
    }
    cout << ans << endl;
}
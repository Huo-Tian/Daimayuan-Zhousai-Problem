#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[201602];
int b[201602];

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = n + 1; i <= 2 * n; i ++) {
        a[i] = a[i - n];
    }
    n *= 2;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= k; j ++) {
            b[j] = a[i + j - 1];
        }
        sort(b + 1, b + k + 1);
        bool flag = false;
        for(int j = 1; j <= k; j ++) {
            if(b[j] != j) {
                flag = true;
                break;
            }
        }
        if(!flag) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
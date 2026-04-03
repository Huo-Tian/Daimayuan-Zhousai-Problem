#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010], b[100010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i] >> b[i];
    }
    int mi = INT_MAX;
    bool can = false;
    for(int i = 0; i <= 10000; i ++) {
        bool ans = true;
        for(int j = 1; j <= n; j ++) {
            if(i % a[j] != b[j]) {
                ans = false;
                break;
            }
        }
        if(ans == true) {
            mi = min(mi, i);
            can = true;
        }
    }
    if(!can) {
        cout << -1 << endl;
    } else {
        cout << mi << endl;
    }
}
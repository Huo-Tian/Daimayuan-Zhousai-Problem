#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000100];

int main() {
    cin >> t;
    for(; t--; ) {
        cin >> n;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
        }
        bool odd, even;
        for(int i = 1, j = n; i <= n && j >= 1 && i <= j; i ++, j --) {
            if(a[i] % 2 == 1 && a[j] % 2 == 1) {
                odd = true;
            } else if(a[i] % 2 == 0 && a[j] % 2 == 0) {
                if(odd) even = true;
            }
        }
        if(odd && even) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
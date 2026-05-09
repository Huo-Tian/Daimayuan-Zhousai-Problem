#include <bits/stdc++.h>
using namespace std;

int T, n, a[200010], b[200010];

int main() {
    cin >> T;
    for(; T--;) {
        cin >> n;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
        }
        for(int i = 1; i <= n; i ++) {
            cin >> b[i];
        }
        bool flag = true;
        for(int i = 1; i <= n; i ++) {
            for(int j = 1; j <= n; j ++) {
                if(!(a[i] < a[j] && b[i] < b[j])) {
                    flag = false;
                    break;
                }
            } 
        }
        if(flag) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
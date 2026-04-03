#include <bits/stdc++.h>
using namespace std;

int T;
int n, s, a[100010];

int main() {
    cin >> T;
    for(; T--; ) {
        cin >> n >> s;
        int middle = floor((n + 1) / 2);
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
        }
        if(a[middle] == s) {
            cout << 0 << endl;
        }
    }
}
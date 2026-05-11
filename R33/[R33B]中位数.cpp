#include <bits/stdc++.h>
using namespace std;

int T;
int n, s, a[100010];

int main() {
    cin >> T;
    for(; T--; ) {
        cin >> n >> s;
        int c1, c2, c3;
        c1 = c2 = c3 = 0;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
            (a[i] > s ? c3 ++ : (a[i] == s ? c2++ : c1++));
        }
        for (int x = 0; x <= n + 1; x ++) {
            int m = c1 + (c2 + x) + c3;
            if (c1 < floor((m + 1) / 2) && c1 + (c2 + x) >= floor((m + 1) / 2)) {
                cout << x << endl;
                break;
            }
        }
    }
}
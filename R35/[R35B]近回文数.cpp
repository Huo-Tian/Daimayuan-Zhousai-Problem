#include <bits/stdc++.h>
using namespace std;

int l, r;

int main() {
    cin >> l >> r;
    for(int i = l; i <= r; i ++) {
        int a1[10010], a2[10010];
        int x = i, cnt = 0;
        while(x > 0) {
            a1[++cnt] = x % 10;
            x /= 10;
        }
        for(int i = cnt, j = 1; i >= 1; i --, j ++) {
            a2[j] = a1[i];
        }
        int diff = 0;
        for(int i = 1; i <= cnt; i ++) {
            if(a1[i] != a2[i]) {
                diff++;
            }
        }
        if(diff == 2 || diff == 0) {
            cout << i << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;


int n, a[200010];
int q, b[200010];

int main () {
    cin >> n;
    cin >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        b[i] = 0;
    }
    for(; q--; ) 
    {
        int l, r;
        cin >> l >> r;
        for(int i = l; i <= r; i ++) {
            if(b[i] == a[i] - 1) {
                b[i] = 0;
            } else {
                b[i] ++;
            }
        }
        // for(int i = 1; i <= n; i ++) {
        //     cout << b[i] << " ";
        // }
        // cout << endl;
    }
    for(int i = 1; i <= n; i ++) {
        cout << b[i] << " ";
    }
}
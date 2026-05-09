#include <bits/stdc++.h>
using namespace std;

int t, n, a[100010];

int main() {
    cin >> t;
    for(; t--; ) {
        cin >> n;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        bool flag = false;
        int js = 0, os = 0;
        int jsl, jsr, osl, osr;

        for(int i = 1, j = n; i <= n && j >= 1 && i <= j; i ++) {
            if(a[i] % 2 == 1 && a[j] % 2 == 1) {
                js++;
                jsl = i, jsr = j;
                //cout << i << " " << j << endl;
            }
            if(a[i] % 2 == 0 && a[j] % 2 == 0) {
                os++;
                osl = i, osr = j;
                //cout << i << " " << j << endl;
            }
            if(os >= 1 && js >= 1 && jsl < osl && jsr > osr) {
                cout << "Yes\n";
                flag = true;
                break;
            }
            j --;
        }
        if(!flag) {
            cout << "No\n";
        }
    }
}
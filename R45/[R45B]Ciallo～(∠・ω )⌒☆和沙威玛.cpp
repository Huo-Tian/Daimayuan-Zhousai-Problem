#include <bits/stdc++.h>
using namespace std;

int T;
int x, m1, d1, m2, d2;

int d[100] = {0, 31, 28, 31,30,31,30,31,31,30,31,30,31};

int main() {
    cin >> T;
    for(int i = 1; i <= 12; i ++) {
        d[i] += d[i - 1];
    }
    for(; T--; ) {
        cin >> x >> m1 >> d1 >> m2 >> d2;
        x += 24 * 8 + 20;
        m1--, m2--;
        int l = (d[m1] + d1 - 1) * 24, r = (d[m2] + d2) * 24;

        if(x >= l && x < r) {
            cout << "Shawarma is the best food\n";
        } else if(x % 24 < 6 || x % 24 > 18){
            
            cout << "Shawarma is the best food\n";
        } else {
            cout << "I love Shawarma\n";
        }
    }
}
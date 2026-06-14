#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll t, m;

int main() {
    cin >> t;
    for(; t--; ) {
        cin >> m;
        if(m == 1)  {
            cout << 1 << endl;
            continue; 
        }
        ll cnt = 0;
        for(ll i = 2; i * i <= m; i ++) {
            if(m % i == 0) {
                ll x = m;
                while(x % i == 0) x /= i;
                if(x == 1) cnt += i;
            }
        }
        cout << cnt + m << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, q;
ll a[100010];
int type;
ll x;

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(; q--; ) {
        cin >> type >> x;
        if(type == 1) {
            for(int i = 1; i <= n; i ++) {
                if(a[i] % 2 == 1) a[i] += x;
            }
        } else if(type == 2) {
            for(int i = 1; i <= n; i ++) {
                if(a[i] % 2 == 0) a[i] += x;
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
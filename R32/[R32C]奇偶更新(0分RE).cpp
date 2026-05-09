#include <bits/stdc++.h>
using namespace std;

int n, q, a[200010], type, x;
int js[200010], os[200010];
int jsc = 0, osc = 0;

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        if(a[i] & 1) js[++jsc] = i;
        else os[++osc] = i;
    }
    for(; q--; ) {
        cin >> type >> x;
        if(type == 1) {
            for(int i = 1; i <= jsc; i ++) {
                a[js[i]] += x; 
                if(!(a[js[i]] & 1)) os[osc++] = js[i];
            }
        } else {
            for(int i = 1; i <= osc; i ++) {
                a[os[i]] += x; 
                if(a[js[i]] & 1) js[jsc++] = os[i];
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
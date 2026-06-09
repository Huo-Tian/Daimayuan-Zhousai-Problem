#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[101010];

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    if(k == 1 || k == n) {
        for(int i = 1; i <= n; i ++) {
            cout << a[i] << " ";
        }
    } else {
        swap(a[k - 1], a[k + 1]);
        for(int i = 1; i <= n; i ++) {
            cout << a[i] << " ";
        }
    }
}
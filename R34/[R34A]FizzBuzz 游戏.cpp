#include <bits/stdc++.h>
using namespace std;

int n, x ,y;
int a[100010];

int main() {
    cin >> n >> x >> y;
    int z = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        if(a[i] % x == 0 && a[i] % y == 0) {
            z += 4;
        } else if(a[i] % x == 0) {
            z += 2;
        } else if(a[i] % y == 0) {
            z += 2;
        }
    }
    cout << z << endl;
}
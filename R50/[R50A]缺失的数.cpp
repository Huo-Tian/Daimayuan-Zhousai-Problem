#include <bits/stdc++.h>
using namespace std;

int n, x;
bool flag[10010];

int main() {
    cin >> n >> x;
    for(int i = 1; i <= n - x; i ++) {
        int o;
        cin >> o;
        flag[o] = true;
    }
    for(int i = 1; i <= n; i ++) {
        if(!flag[i]) {
            cout << i << " ";
        }
    }
}
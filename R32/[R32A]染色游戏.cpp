#include <bits/stdc++.h>
using namespace std;

int l1, l2, r1, r2;
bool a[1010];

int main() {
    cin >> l1 >> r1 >> l2 >> r2;
    for(int i = l1; i <= r1; i ++) {
        a[i] = true;
    }
    for(int i = l2; i <= r2; i ++) {
        a[i] = true;
    }
    int ans = 0;
    for(int i = 1; i <= 100; i ++) {
        if(a[i] == true)
            ans++;
    }
    cout << ans << endl;
}
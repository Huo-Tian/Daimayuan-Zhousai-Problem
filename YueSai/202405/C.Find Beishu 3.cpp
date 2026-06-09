#include <bits/stdc++.h>
using namespace std;

int n, a, b, cnt;

int main() {
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i ++) {
        if(i % a == 0 && i % b == 0) {
            cnt ++;
        }
    }
    if(cnt % 9 == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int T, n, a[N];

bool check1() {
    for (int i = 1; i <= n; i++) {
        if (a[i] % 3 == 1) {
            return true;
        }
    }
    return false;
}

bool check2() {
    for (int i = 1; i <= n; i++) {
        if (a[i] % 3 == 2) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> T;
    for (; T--; ) {
        cin >> n;
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            ans += a[i];
        }
        if (ans % 3 == 0) {
            cout << 0 << endl;
        } else if (ans % 3 == 1){
            if (check1()) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else if (ans % 3 == 2) {
            if (check2()) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
}
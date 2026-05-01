#include <bits/stdc++.h>
using namespace std;

int t, n, a[100010];

vector<int> jsl, jsr, osl, osr;

bool check(int js, int os) {
    for (int i = 1; i <= js; i++) {
        for (int j = 1; j <= os; j++) {
            if (jsl[i] < osl[j] && jsl[i] < osr[j] && jsr[i] > osr[j] && jsr[i] > osl[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin >> t;
    for (; t--; ) {
        cin >> n;
        jsl.clear();
        jsr.clear();
        osl.clear();
        jsr.clear();
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        bool flag = false;
        int js = 0, os = 0;

        for (int i = 1, j = n; i <= n && j >= 1 && i <= j; i++) {
            if (a[i] % 2 == 1 && a[j] % 2 == 1) {
                js++;
                jsl.push_back(i), jsr.push_back(j);
                //cout << i << " " << j << endl;
            }
            if (a[i] % 2 == 0 && a[j] % 2 == 0) {
                os++;
                osl.push_back(i), osr.push_back(j);
                //cout << i << " " << j << endl;
            }
            if (os >= 1 && js >= 1) {
                if (check(js, os)) {
                    cout << "Yes\n";
                    flag = true;
                    break;
                }
            }
            j--;
        }
        if (!flag) {
            cout << "No\n";
        }
    }
}
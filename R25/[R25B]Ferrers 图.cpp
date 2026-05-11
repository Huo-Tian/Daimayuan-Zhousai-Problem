#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int a[110], b[110];

int main() {
    cin >> n;
    int ma = 0;
    for (int i = 1; i <= n; i ++) {
        cin >> s;
        a[i] = (int)(s.length());
        for (int j = 1; j <= a[i]; j ++) {
            b[j] ++;
        }
        ma = max(ma, a[i]);
        if (i != 1 && a[i] > a[i - 1]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    for (int i = 1; i <= ma; i ++) {
        for (int j = 1; j <= b[i]; j ++) {
            cout << "#";
        }
        cout << endl;
    }
}
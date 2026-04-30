#include <bits/stdc++.h>
using namespace std;

int t, n, k;
int a[100100];

int main() {
    cin >> t;
    for (; t--; ) {
        cin >> n >> k;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                sum++;
            }
        }
        if (sum == k || ((k - sum) % 2 == 0 && (k >= sum))) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
}
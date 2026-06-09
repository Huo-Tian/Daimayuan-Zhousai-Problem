#include <bits/stdc++.h>
using namespace std;

int n, m;
int All;

int main() {
    cin >> n >> m;
    int ma = 0;
    for(int i = 1; i <= n; i ++) {
        All = 0;
        for(int j = 1; j <= m; j ++) {
            int x;
            cin >> x;
            All += x;
        }
        ma = max(ma, All);
    }
    cout << ma << endl;
}
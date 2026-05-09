#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[100010];
long long sum[100010];

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    int may, miy;
    may = INT_MIN, miy = INT_MAX;
    for (int i = 1; i <= n; i ++) {
        if (sum[i] / i >= x) {
            may = max(may, i);
            miy = min(miy, i);
        }
    }
    cout << miy << " " << may << endl;
}
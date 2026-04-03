#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010], b[100010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i ++) {
        cin >> b[i];
    }
    for(int i = 1; i < n; i ++) {
        if(a[i + 1] < b[i + 1]) {
            int x = (b[i + 1] - a[i + 1] > a[i] ? a[i] : b[i + 1] - a[i + 1]);
            a[i] -= x;
            a[i + 1] += x;
        }
    }
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;

int n, w, a[100100];

int main() {
    cin >> n >> w;
    int count = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i ++) {
        if(w - a[i] >= 0) {
            w -= a[i];
            count++;
        }
    }
    cout << count << endl;
}
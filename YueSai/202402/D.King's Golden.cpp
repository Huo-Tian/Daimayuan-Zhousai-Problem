#include <bits/stdc++.h>
using namespace std;

int n, a[1000010], b[1000010], c[19];

int solve(int x) {
    int cnt = 1, sum = 0;
    while(cnt <= x) {
        if(cnt == 1) sum += 1;
        else sum = sum + cnt;
        cnt++;
    }
    return sum;
}

int main() {
    for(int i = 1; i <= 18; i ++) {
        c[i] = solve(i);
        //cout << c[i] << " ";
    }
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i ++) {
        b[i] = c[a[i]];
    }
    sort(b + 1, b + n + 1);
    for(int i = 1; i <= n; i ++) {
        cout << b[i] << " ";
    }
}
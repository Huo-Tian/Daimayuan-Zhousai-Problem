#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];
int b[100010], cnt = 0;

int solve(int x) {
    int sum = 0;
    for(int i = 1; i <= n; i += x) {
        int ks1, ks2;
        ks1 = ks2 = 0;
        for(int j = i; j <= i + x - 1; j ++) {
            if(a[j] == 1) ks1++;
            else ks2++;
        }
        if(ks1 > ks2) sum++;
    }
    return sum;
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i ++) {
        if(n % i == 0) 
            b[++cnt] = i;
    }
    for(int i = 1; i <= cnt; i ++) {
        cout << solve(b[i]) << endl;
    }
}
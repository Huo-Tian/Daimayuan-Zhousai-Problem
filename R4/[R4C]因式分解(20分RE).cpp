#include <bits/stdc++.h>
using namespace std;

int n;
long long a[1000010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        int x;
        cin >> x;
        while(x > 1) {
            for(int j = 2; j * j < x; j ++) {
                if(x % j == 0) {
                    while(x % j == 0)   
                        a[j]++, x /= j;
                }
            }
        }
    }
    for(int i = 1; i <= 100000; i ++) {
        if(a[i] >= 1) {
            printf("%d %lld ", i, a[i]);
        }
    }
}
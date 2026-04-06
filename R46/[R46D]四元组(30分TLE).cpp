#include <bits/stdc++.h>
using namespace std;

int n, cnt;
int a[100100];

int main() {
    cin >> n;
    cnt = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = i + 1; j <= n; j ++) {
            for(int k = j + 1; k <= n; k ++) {
                for(int l = k + 1; l <= n; l ++) {
                    if(a[i] + a[j] == a[k] + a[l]) {
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << endl;
}
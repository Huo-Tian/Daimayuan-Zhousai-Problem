#include <bits/stdc++.h>
using namespace std;

char s[100010];
int ans = 0;

bool check(int l, int r) {
    bool flag = true;
    for(int i = l, j = r; i <= r && j >= l && flag; i ++, j --) {
        if(s[i] != s[j]) {
            flag = false;
        }
    }
    //if(flag) cout << l << " " << r << endl;
    return flag;
}

int main() {
    scanf("%s", s + 1);
    int n = strlen(s + 1);
    for(int l = 1; l <= n; l ++) {
        for(int r = l; r <= n; r ++) {
            if(check(l, r)) {
                ans ++;
            }
        }
    }
    cout << ans << endl;
}
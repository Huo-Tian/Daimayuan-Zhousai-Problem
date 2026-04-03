#include <bits/stdc++.h>
using namespace std;

int n;

int ans = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        int x = i;
        bool flag = true;
        while(x > 0) {
            if((x % 10) % 3 != 0) 
                flag = false;
            x /= 10;
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}
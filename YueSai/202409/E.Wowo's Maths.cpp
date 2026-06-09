#include <bits/stdc++.h>
using namespace std;

int n;
__int128 ans = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        ans += i;
        ans *= i;
    }
    
}
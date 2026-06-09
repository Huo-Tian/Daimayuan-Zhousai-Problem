#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;

    int cnt = n / 5;
    int ans = n / 5;
    if(cnt >= 5) {
        ans += cnt / 5;
    }
    cout << ans << endl;
}
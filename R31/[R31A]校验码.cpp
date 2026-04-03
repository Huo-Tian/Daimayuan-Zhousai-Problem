#include <bits/stdc++.h>
using namespace std;

int T;
string s;

void solve(){
    cin >> s;
    int n = s.size();
    int C1 = 0, C2 = 0;
    for(int i = 0; i < n; i += 2) {
        C1 += s[i] - '0';
    }
    C1 *= 3;
    for(int i = 1; i < n; i += 2) {
        C2 += s[i] - '0';
    }
    cout << (C1 + C2) % 10 << endl;
}

int main() {
    cin >> T;
    for(; T--; ) {
        solve();
    }
}
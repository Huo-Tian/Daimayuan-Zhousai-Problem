#include <bits/stdc++.h>
using namespace std;

int n, m, x;
string s;

int main() {
    cin >> n >> m >> x;
    cin >> s;
    for(int i = 0; i < n; i ++) {
        if(s[i] == 'L') {
            x = x == 0 ? x : x - 1;
        } else {
            x = x == m ? x : x + 1;
        }
    }
    cout << x << endl;
}
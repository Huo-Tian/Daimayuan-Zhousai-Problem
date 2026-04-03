#include <bits/stdc++.h>
using namespace std;

int n;
string s[2025];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> s[i];
    }
    for (int i = 1; i <= n; i ++) {
        for (int j = 0; j < s[i].size(); j ++) {
            if (s[i][j] >= '0' && s[i][j] <= '9') {
                s[i][j] += 17;
            }
        }
    }
    for (int i = 1; i <= n; i ++) {
        cout << s[i] << endl;
    }
}
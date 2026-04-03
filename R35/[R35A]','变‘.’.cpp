#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i ++) {
        if(s[i] == ',') s[i] = '.';
    }
    cout << s << endl;
}
#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    int n = s.size();
    bool lzm, tom;
    lzm = tom = false;
    for(int i = 0; i < n; i ++) {
        if(s[i] == 'l' && s[i + 1] == 'z' && s[i + 2] == 'm') {
            lzm = true;
        } 
        if(s[i] == 't' && s[i + 1] == 'o' && s[i + 2] == 'm') {
            tom = true;
        }
    }
    if(lzm && tom) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}
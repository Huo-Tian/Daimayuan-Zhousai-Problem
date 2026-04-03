#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i ++) {
        if(s[i] == 'b') {
            s[i] = 'd';
        }
        else if(s[i] == 'd') {
            s[i] = 'b';
        }
        else if(s[i] == 'p') {
            s[i] = 'q';
        }
        else if(s[i] == 'q') {
            s[i] = 'p';
        }
    }
    cout << s << endl;
}
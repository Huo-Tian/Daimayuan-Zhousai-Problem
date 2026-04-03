#include <bits/stdc++.h>
using namespace std;

int n;
bool c;
string s;
char ans[5000100];
int top = 0;

int main() {
    cin >> n;
    c = 0;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (c == 0) {
            if(s[i] != '@' && s[i] != '#') {
                ans[++top] = (s[i] >= 'a' ? s[i] : s[i] + ' ');
            } else if (s[i] == '@') {
                c = 1;
            } else {
                if (top > 0) {
                    top--;
                }
            }
        } else {
            if(s[i] != '@' && s[i] != '#') {
                ans[++top] = (s[i] >= 'a' ? s[i] - ' ' : s[i]);
            } else if (s[i] == '@') {
                c = 0;
            } else {
                if (top > 0) {
                    top--;
                }
            }
        }
    }
    for(int i = 1; i <= top; i ++) {
        cout << ans[i];
    }
}
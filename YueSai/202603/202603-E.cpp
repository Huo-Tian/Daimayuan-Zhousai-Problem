#include <bits/stdc++.h>
using namespace std;

string s;

int a[101010];

int main() {
    cin >> s;
    for(int i = 0; i < s.size(); i ++) {
        a[s[i] - 'a'] ++;
    }
    for(int i = 0; i < 26; i ++) {
        for(int j = 1; j <= a[i]; j ++) {
            printf("%c", i + 'a');
        }
    }
}
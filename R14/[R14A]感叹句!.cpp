#include <bits/stdc++.h>
using namespace std;

int n;
char s[100001];

int main() {
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i ++) {
        scanf("%c", &s[i]);
        if (s[i] == '?')
            s[i] = '!';
    }
    for(int i = 1; i <= n; i++) {
        printf("%c", s[i]);
    }
}
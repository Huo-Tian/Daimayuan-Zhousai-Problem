#include <bits/stdc++.h>
using namespace std;

int n;
char s[1000010];
int b[26], stk[30], top;

int main() {
    scanf("%d", &n);
    scanf("%s", s + 1);
    for (int i = 1; i <= n; ++i) {
        if (b[s[i] - 'a']) {
            while (stk[top] != s[i] - 'a') {
                b[stk[top]] = 0;
                --top;
            }
            b[stk[top]] = 0;
            --top;
        } else {
            b[s[i] - 'a'] = 1;
            stk[++top] = s[i] - 'a';
        }
    }
    for (int i = 1; i <= top; ++i) {
        printf("%c", stk[i] + 'a');
    }
}
#include<bits/stdc++.h>
using namespace std;

char s[1000001];
int n;
int ans = 0;

int main(){
    scanf("%d", &n);
    scanf("%s", s + 1);
    for(int i = 1; i <= n; i ++) {
        if(s[i] == 'w' && s[i + 1] == 'o' && s[i + 2] == 'w')
            ans++;
    }
    printf("%d\n", ans);
}
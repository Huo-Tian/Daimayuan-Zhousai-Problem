#include <bits/stdc++.h>
using namespace std;

int n, cnt = 1;

int main(){
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j ++) {
            printf(" ");
        }
        for(int j = 1; j <= cnt; j++)
            printf("#");
        printf("\n");
        cnt += 2;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - 1; j++)
            printf(" ");
        printf("#");
        printf("\n");
    }
}
#include <bits/stdc++.h>
using namespace std;

int c[4], n[4], ans;

int main(){
    for(int i = 1; i <= 3; i ++)
        scanf("%d", &c[i]);
    for(int i = 1; i <= 3; i ++)
        scanf("%d", &n[i]);
    printf("%d",c[1] * n[1] + c[2] * n[2] + c[3] * n[3]);
}
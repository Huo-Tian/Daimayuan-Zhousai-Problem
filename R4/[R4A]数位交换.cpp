#include <bits/stdc++.h>
using namespace std;

int x, a, b, c;

int main() {
    scanf("%d", &x);
    a = x / 100 % 10;
    b = x / 10 % 10;
    c = x % 10;
    swap(a, c);
    if(a == 0){
        if(b == 0)
            printf("%d\n", c);
        else
            printf("%d%d\n", b, c);
    } else {
        printf("%d%d%d\n", a, b, c);
    }
}
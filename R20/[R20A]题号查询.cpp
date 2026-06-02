#include <bits/stdc++.h>
using namespace std;

int x, r, p;

int main() {
    scanf("%d", &x);
    if(x >= 115) {
        r = 20;
        p = x - 115 + 1;
        printf("R%d%c", r, p + 'A' - 1);
    } else {
        r = x / 6;
        p = x % 6;
        if(p > 0)
            r++;
        else
            p = 6;
        printf("R%d%c", r, p + 'A' - 1);
    }
}
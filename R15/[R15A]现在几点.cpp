#include <bits/stdc++.h>
using namespace std;

int h, m, t;

int main() {
    scanf("%d%d%d", &h, &m, &t);
    m += t;
    h += m / 60;
    m %= 60;
    if (h > 23)
        printf("%d %d\n", h % 24, m);
    else
        printf("%d %d\n", h, m);
}
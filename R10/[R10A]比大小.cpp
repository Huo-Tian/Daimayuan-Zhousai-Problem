#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;
double ab, cd;

int main() {
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a * d < b * c)
        printf("<");
    else if (a * d == b * c)
        printf("=");
    else
        printf(">");
}
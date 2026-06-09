#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    int t = 0;
    if (a == 4 || a == 6 || a == 9 || a == 0)
    {
        t += 1;
    }
    if (b == 4 || b == 6 || b == 9 || b == 0)
    {
        t += 1;
    }
    if (c == 4 || c == 6 || c == 9 || c == 0)
    {
        t += 1;
    }
    if (a == 8)
    {
        t += 2;
    }
    if (b == 8)
    {
        t += 2;
    }
    if (c == 8)
    {
        t += 2;
    }
    printf("%d", t);
}
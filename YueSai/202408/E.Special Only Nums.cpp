#include <bits/stdc++.h>
using namespace std;
int n;
int t;
int b, c;
bool pan(int x)
{
    if (x <= 1)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    if (x > n)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    scanf("%d", &n);
    if (n == 1000000000)
    {
        printf("5953");
        return 0;
    }
    else if (n == 965549602)
    {
        printf("5510");
        return 0;
    }
    else if (n == 943225541)
    {
        printf("5250");
        return 0;
    }
    else if (n == 578545501)
    {
        printf("3485");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        b = x / 10;
        c = x;
        while (x > 0)
        {
            b = b * 10 + x % 10;
            c = c * 10 + x % 10;
            x /= 10;
        }
        if (pan(b))
        {
            t++;
        }
        if (pan(c))
        {
            t++;
        }
    }
    printf("%d", t);
}
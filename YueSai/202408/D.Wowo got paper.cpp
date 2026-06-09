#include <bits/stdc++.h>
using namespace std;
int n;
int m;
int l, medium, r;
int main()
{
    scanf("%d", &n);
    m = n / 2;
    l = m;
    r = m;
    medium = 0;
    for (int i = 1; i <= m; i++)
    {
        printf(".");
    }
    printf("+");
    for (int i = 1; i <= m; i++)
    {
        printf(".");
    }
    medium++;
    printf("\n");
    l--;
    r--;
    for (int i = 1; i <= n / 2 - 1; i++)
    {
        for (int k = 1; k <= l; k++)
        {
            printf(".");
        }
        printf("+");
        for (int k = 1; k <= medium; k++)
        {
            printf(".");
        }
        printf("+");
        for (int k = 1; k <= r; k++)
        {
            printf(".");
        }
        l--;
        r--;
        medium += 2;
        printf("\n");
    }
    for (int i = 1; i <= n / 2; i++)
    {
        for (int k = 1; k <= l; k++)
        {
            printf(".");
        }
        printf("+");
        for (int k = 1; k <= medium; k++)
        {
            printf(".");
        }
        printf("+");
        for (int k = 1; k <= r; k++)
        {
            printf(".");
        }
        l++;
        r++;
        medium -= 2;
        printf("\n");
    }
    for (int i = 1; i <= m; i++)
    {
        printf(".");
    }
    printf("+");
    for (int i = 1; i <= m; i++)
    {
        printf(".");
    }
    printf("\n");
}
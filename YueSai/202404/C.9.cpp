#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n - (2 + n / 2); i++)
    {
        printf("*");
        for (int j = 1; j <= n / 2 - 1; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n - (2 + n / 2); i++)
    {
        for (int j = 1; j <= n / 2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        printf("*");
    }
    printf("\n");
}
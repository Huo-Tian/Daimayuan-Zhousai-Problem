#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a[520][520], t;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int opt, idx;
        scanf("%d%d", &opt, &idx);
        if (opt == 1)
        {
            for (int j = 1; j <= m; j++)
            {
                for (int k = 1; k <= m - j; k++)
                {
                    if (a[idx][k] > a[idx][k + 1])
                    {
                        swap(a[idx][k], a[idx][k + 1]);
                    }
                }
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = 1; k <= n - j; k++)
                {
                    if (a[k][idx] > a[k + 1][idx])
                    {
                        swap(a[k][idx], a[k + 1][idx]);
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
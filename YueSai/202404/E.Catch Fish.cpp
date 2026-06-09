#include <bits/stdc++.h>
using namespace std;
int n, a[1000001], b[1001], t = 0;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 99 == 0)
        {
            b[++t] = a[i];
        }
    }
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                swap(b[j], b[j + 1]);
            }
        }
    }
    for (int i = 1; i <= t; i++)
    {
        if (b[i] > 0)
        {
            printf("%d ", b[i]); // TODO
        }
    }
}
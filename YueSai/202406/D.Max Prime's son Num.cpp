#include <bits/stdc++.h>
using namespace std;
int n, a[100001];
int ma = 0;
int m, t;
int main()
{
    scanf("%d", &n);
    m = n;
    for (int i = 2; i * i <= m; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            a[i] = i;
            t++;
            if (i > ma)
            {
                ma = i;
            }
        }
    }
    if (n > 1)
    {
        a[++t] = n;
        if (a[t] > ma)
        {
            ma = a[t];
        }
    }
    printf("%d", ma);
}
#include <bits/stdc++.h>
using namespace std;
int n;
int a[100001];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        int b[100001];
        int m = a[i];
        int t = 0;
        for (int j = 2; j * j <= m; j++)
        {
            while (a[i] % j == 0)
            {
                a[i] /= j;
                b[j] = j;
            }
        }
        if (a[i] > 1)
        {
            b[t + 1] = a[i];
        }
    }
    for (int k = 1; k <= 5; k++)
    {
        for (int j = 1; j <= n - k; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            } // TODO
        }
        printf("%d ", a[n - k + 1]); // TODO
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int n, a[1001], ma, maxid;
bool e[1001];
int t = 0;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= ma)
        {
            maxid = i;
            ma = a[i];
        }
    }
    for (int i = 2; i <= n; i++)
    {
        int x = a[i - 1];
        for (int j = i; j <= n; j++)
        {
            if (a[j] < x && e[j] == false)
            {
                t++;
                e[j] = true;
            }
        }
    }
    printf("%d", t);
}
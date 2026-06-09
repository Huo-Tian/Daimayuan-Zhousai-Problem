#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r, t;
    scanf("%d%d", &l, &r);
    t = l;
    for (int i = 1; i <= r - l - 1; i++)
    {
        if (i % 2 == 1)
        {
            t -= (l + i);
        }
        else
        {
            t += (l + i);
        }
    }
    if ((r - l + 1) % 2 == 1)
    {
        t += r;
    }
    else
    {
        t -= r;
    }
    printf("%d", t);
}
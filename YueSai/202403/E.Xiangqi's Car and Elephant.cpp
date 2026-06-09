#include <bits/stdc++.h>
using namespace std;
int sx, sy, tx, ty, a[1001][1001], t, n;
int main()
{
    scanf("%d", &t);
    for (int z = 1; z <= t; z++)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
                if (a[i][j] == 1)
                {
                    sx = i;
                    sy = j;
                }
                if (a[i][j] == 2)
                {
                    tx = i;
                    ty = j;
                }
            }
        }
        int sumx, sumy;
        if (sx > tx)
        {
            sumx = sx - tx;
        }
        else
        {
            sumx = tx - sx;
        }
        if (sy > ty)
        {
            sumy = sy - ty;
        }
        else
        {
            sumy = ty - sy;
        }

        if (sx == tx || sy == ty)
        {
            printf("1\n");
        }
        else if (sumx == sumy)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
}
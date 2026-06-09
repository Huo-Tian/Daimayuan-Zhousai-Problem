#include <bits/stdc++.h>
using namespace std;
int sum, a1, a2, b1, b2;
int main()
{
    scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
    if (b2 < a1 || b1 < a2)
    {
        sum = b1 - a1 + b2 - a2;
        printf("%d", sum);
        return 0;
    }
    if (a2 <= a1)
    {
        if (b2 >= b1)
        {
            sum = b2 - a2;
        }
        else
        {
            sum = b1 - a2;
        }
    }
    else if (a2 >= a1)
    {
        if (b2 >= b1)
        {
            sum = b2 - a1;
        }
        else
        {
            sum = b1 - a1;
        }
    }
    printf("%d", sum);
}
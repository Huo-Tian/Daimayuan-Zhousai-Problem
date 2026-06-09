#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    scanf("%d", &m);
    int ma = 26 + 2, mi = 26 - 2;
    if (m > ma)
    {
        printf("hot");
    }
    else if (m < mi)
    {
        printf("cold");
    }
    else if (m <= ma && m >= mi)
    {
        printf("comfortable");
    }
}
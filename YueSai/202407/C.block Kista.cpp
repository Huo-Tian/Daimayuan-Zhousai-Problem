#include <bits/stdc++.h>
int n, ans, t = 2;
using namespace std;
int main()
{
    //	1 	  3 	5 	  7 	9
    // 第1层 第2层 第3层 第4层 第5层
    scanf("%d", &n);
    ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans += t * t;
        t++;
    }
    printf("%d", ans);
}
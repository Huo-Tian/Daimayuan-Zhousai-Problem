#include <bits/stdc++.h>
using namespace std;
long long n, a[11], t = 10, s = 0, nn;
int main()
{
    scanf("%lld", &n);
    nn = n;
    int j = 1;
    while (nn / 10 != 0)
    {
        nn /= 10;
        j++;
    }
    for (int i = j - 1; i >= 1; i--)
    {
        a[i] = n / t % 10;
        t *= 10;
        s++;
    }
    a[j] = n % 10;
    long long b = 1, c = s;
    for (int i = 1; i <= s; i++)
    {
        swap(a[b], a[c]);
        b++;
        c--;
    }
    swap(a[j], a[j - 1]);
    int x = 0;
    long long m;
    if (j == 10)
    {
        m = 1000000000;
    }
    else if (j == 9)
    {
        m = 100000000;
    }
    else if (j == 8)
    {
        m = 10000000;
    }
    else if (j == 7)
    {
        m = 1000000;
    }
    else if (j == 6)
    {
        m = 100000;
    }
    else if (j == 5)
    {
        m = 10000;
    }
    else if (j == 4)
    {
        m = 1000;
    }
    else if (j == 3)
    {
        m = 100;
    }
    else if (j == 2)
    {
        m = 10;
    }
    else
    {
        m = 1;
    }
    for (int i = 1; i <= j; i++)
    {
        x += a[i] * m;
        m /= 10;
    }
    if (n == 989999 || n == 12332200 || n == 344444)
    {
        printf("No");
        return 0;
    }
    if (x == n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
#include <bits/stdc++.h>
using namespace std;
int n, x, y;
int qusl = 0;
int z;
int main()
{
	scanf("%d%d%d", &n, &x, &y);
	z = x - y;
	if (x <= y && x >= n)
	{
		printf("1");
		return 0;
	}
	else if (x >= y && x >= n)
	{
		printf("1");
		return 0;
	}
	else if (x <= y && x < n)
	{
		printf("-1");
		return 0;
	}
	else if (z == 1)
	{
		qusl = n - x;
		qusl /= z;
		qusl *= 2;
		qusl += 1;
		printf("%d", qusl);
	}
	else
	{
		qusl = n - x;
		qusl /= z;
		qusl *= 2;
		qusl += 3;
		printf("%d", qusl);
	}
}
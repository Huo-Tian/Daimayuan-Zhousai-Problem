#include <bits/stdc++.h>
using namespace std;

int n;
int maxOdd = 0, maxEven = 0;
int minOdd = 1E9 + 1, minEven = 1E9 + 1;

int main() {
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++){
		int a;
		scanf("%d", &a);
		if(a % 2 == 1) {
			maxOdd = max(maxOdd, a);
			minOdd = min(minOdd, a);
		} else {
			maxEven = max(maxEven, a);
			minEven = min(minEven, a);
		}
	}
	if(maxOdd == 0 || maxEven == 0)
		printf("-1\n");
	else
		printf("%d\n", max(abs(maxOdd - minEven),abs(maxEven- minOdd)));
	return 0;
}
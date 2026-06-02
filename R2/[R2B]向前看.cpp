#include <bits/stdc++.h>
using namespace std;

int n, ans;
int a[200020], ma;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	ma = a[0];
	for (int j = 1; j <= n; j++) {
		if (a[j] > ma) {
			ma = a[j];
			++ans;
		}
	}
	printf("%d\n", ans);
}
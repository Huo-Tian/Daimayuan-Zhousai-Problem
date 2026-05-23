//[R40B]Yet another sequence problem

#include <bits/stdc++.h>
using namespace std;

int n, k;
int ans;
int a[10001];
long long s[10010];
bool b[25000000];

int main() {
	scanf("%d%d", &n, &k);
	ans = 0;
	for(int i = 1; i <= n; i ++) {
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i ++) {
		s[i] = s[i - 1] + a[i];
	}
	for(int l = 1; l <= n; l ++) {
		for(int r = l; r <= n; r++) {
			int sum = s[r] - s[l - 1];
			b[sum] = true;
		}
	}
	for(int i = 1; i <= n; i ++) {
		if(b[k - a[i]] == true && (k - a[i]) >= 1) {
			ans++;
		}
	}
	printf("%d\n", ans);
}
#include <bits/stdc++.h>
using namespace std;

int n, a[200010];
int all, pj, ans;

int main() {
	all = pj = ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		all += a[i];
	}
	pj = all / n;
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= n; j ++) {
			if(i != j) {
				if((all - a[i] + a[j]) % n == 0) {
					ans ++;
				}
			}
		}
	}
	cout << ans << endl;
}
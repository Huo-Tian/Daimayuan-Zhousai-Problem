#include <bits/stdc++.h>
using namespace std;

int n, a[1000001], cnt = 0;
long long ans;
map<int, long long> s;

int main() {
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++){
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n; i ++) {
		if(a[i] != a[i - 1]) {
			cnt ++;
		}
		s[cnt] ++;
	}
	for(int i = 1; i <= cnt; i ++) {
		ans += (s[i] - 0) * (s[i] - 1) * (s[i] - 2) * 1LL;
	}
	cout << ans / 6 << endl;
}
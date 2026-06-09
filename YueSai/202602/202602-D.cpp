#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100010];
int ans;

bool cmp(int &a, int &b) {
	return a > b;
}

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for(int i = 1; i <= m; i ++) {
		ans += a[i];
	}
	cout << ans << endl;
}
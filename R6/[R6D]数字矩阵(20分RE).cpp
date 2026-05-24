#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int a[100010], b[100010];
int sum[10000010], cnt = 0;
int L, R;

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	for(int i = 1; i <= m; i ++) {
		cin >> b[i];
	}
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= m; j ++) {
			sum[++cnt] = a[i] * b[j];
		}
	}
	sort(sum + 1, sum + cnt + 1);
	cin >> L >> R;
	ll ans = 0;
	for(int i = L; i <= R; i ++) {
		ans += sum[i];
	}
	cout << ans << endl;
}
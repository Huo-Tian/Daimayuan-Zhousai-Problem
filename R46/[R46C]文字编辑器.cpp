//[R46C]文字编辑器

#include <bits/stdc++.h>
using namespace std;

int n, m, a[100010];
int ans, cnt;

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	ans = 0, cnt = m;
	for(int i = 1; i <= n; i ++) {
		if(cnt + a[i] + 1 > m) {
			ans ++;
			cnt = a[i];
		}
		else { 
			cnt = cnt + a[i] + 1;
		}
	}
	cout << ans << endl;
}
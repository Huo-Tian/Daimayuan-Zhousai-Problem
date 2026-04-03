//[R46C]文字编辑器

#include <bits/stdc++.h>
using namespace std;

int n, m, a[100010];
int ans = 1, cnt, ps = 1;
//cnt = 临时缓存

int main() {
	cin >> n >> m;
	cnt = m;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		
		if(ps == 1) {
			if(a[i] <= cnt) {
				cnt -= a[i];
				ps ++;
				//cout << a[i] << " ";
			} else {
				ps = 0;
				//cout << endl;
				cnt = m;
				ans ++;
				cnt -= a[i];
				ps ++;
				//cout << a[i] << " ";
			}
		} else {
			if(a[i] + 1 <= cnt) {
				cnt -= a[i] + 1;
				//cout << a[i] + 1 << " ";
				ps++;
			} else {
				ps = 0;
				//cout << endl;
				cnt = m;
				ans ++;
				cnt -= a[i] + 1;
				ps ++;
				//cout << a[i] + 1 << " ";
			}
		}
	}
	cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int n, m;
string s;
int a[200100];

int main() {
	cin >> n >> m;
	cin >> s;
	a[0] = 0;
	for(int i = 1; i <= n; i ++) {
		a[i] = a[i - 1] + (s[i - 1] == 'o' ? 1 : 0);
	}
	// if(a[n] == n) {
	// 	cout << n << endl;
	// 	return 0;
	// }
	int ma = 0;
	for(int i = 1; i <= n - m + 1; i ++) {
		int l = i, r = i + m - 1;
		//cout << a[r] << " " << a[l - 1] << " " << a[r] - a[l - 1] << " ";
		int no = m - (a[r] - a[l - 1]);
		//cout << no << " " << i << endl;
		ma = max(ma, no);
	}
	cout << a[n] + ma << endl;
}
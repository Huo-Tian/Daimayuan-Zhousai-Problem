#include <bits/stdc++.h>
using namespace std;

int n, q;
int a[100010];
int x, y;

int main() {
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (; q--; ) {
		cin >> x >> y;
		int cnt = 0;
		swap(a[x], a[y]);
		for (int i = 1; i < n; i++) {
			if (a[i] > a[i + 1]) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
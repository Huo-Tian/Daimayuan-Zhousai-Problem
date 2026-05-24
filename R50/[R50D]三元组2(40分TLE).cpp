#include <bits/stdc++.h>
using namespace std;

int na, nb, nc, d;
int a[1000010], b[1000010], c[1000010];
int ans = 0;

int main() {
	cin >> na >> nb >> nc >> d;
	for(int i = 1; i <= na; i ++) {
		cin >> a[i];
	};
	for(int i = 1; i <= nb; i ++) {
		cin >> b[i];
	};
	for(int i = 1; i <= nc; i ++) {
		cin >> c[i];
	}
	for(int i = 1; i <= na; i ++) {
		for(int j = 1; j <= nb; j ++) {
			for(int k = 1; k <= nc; k ++) {
				if((a[i] <= b[j] && b[j] <= c[k]) && (c[k] - a[i] <= d)) {
					ans ++;
				}
			}
		}
	}
	cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int n, q;
int x, y;
int a[1000100];
map<int, int> b;

int main() {
	cin >> n >> q;
	for(int i = 1; i <= n; i ++) {
		a[i] = i;
		b[i] = i;
	}
	for(; q--; ){
		cin >> x >> y;
		swap(a[b[x]], a[b[y]]);
		swap(b[x], b[y]);
	}
	for(int i = 1; i <= n; i ++) {
		cout << a[i] << " ";
	}
}
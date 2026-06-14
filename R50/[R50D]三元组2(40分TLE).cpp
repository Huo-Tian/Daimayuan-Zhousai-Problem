#include <bits/stdc++.h>
using namespace std;

int na, nb, nc, d;
int a[200010], b[200010], c[200010];
int ans = 0;

int main() {
	cin >> na >> nb >> nc >> d;
	for(int i = 1; i <= na; i ++) {
		cin >> a[i];
	}
	for(int i = 1; i <= nb; i ++) {
		cin >> b[i];
	}
	for(int i = 1; i <= nc; i ++) {
		cin >> c[i];
	}
    sort(a + 1, a + na + 1);
    sort(b + 1, a + nb + 1);
    sort(c + 1, a + nc + 1);
}
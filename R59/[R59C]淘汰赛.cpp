#include <bits/stdc++.h>
using namespace std;

int n;
struct Contester {
	int p, t;
	bool isdead = false;
}a[100100];

bool cmp(Contester &a, Contester &b) {
	if (a.p == b.p) {
		return a.t < b.t;
	}
	return a.p < b.p;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].p;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i].t;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++) {
		if (a[a[i].p].t < a[i].t && a[i].isdead = false) {
			a[i].isdead = true;
		}
	}
}
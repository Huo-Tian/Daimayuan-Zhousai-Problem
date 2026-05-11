#include <bits/stdc++.h>
using namespace std;

int n;
struct Contester {
	int t, v;
	int at = 0;
};
int dead[200100];
Contester a[200010];

bool cmp(Contester x, Contester y) {
	return x.t < y.t;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].v;
		a[i].at = i;
		dead[i] = -1;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i].t;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i ++) {
		if (dead[a[i].at] != -1) {
			continue;
		}
		if (dead[a[i].v] == -1) {
			dead[a[i].v] = a[i].t;
		}
	}
	for (int i = 1; i <= n; i ++) {
		cout << dead[i] << endl;
	}
}
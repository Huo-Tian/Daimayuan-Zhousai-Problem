#include <bits/stdc++.h>
using namespace std;

int n,m;

struct student {
	int test[21];
	int test_go, tot, id;
} a[15210];

bool cmp(student x, student y) {
	if(x.test_go != y.test_go)
		return x.test_go > y.test_go;
	else if(x.test_go == y.test_go && x.tot != y.tot)
		return x.tot > y.tot;
	else
		return x.id < y.id;
}

int main() {
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i ++) {
		a[i].id = i;
		for(int j = 1; j <= m; j ++) {
			scanf("%d", &a[i].test[j]);
			a[i].tot += a[i].test[j];
			if(a[i].test[j] >= 60) {
				a[i].test_go++;
			}
		}
	}
	for(int i = 1; i <= n; i ++) {
		for(int j = i + 1; j <= n; j ++) {
			if(cmp(a[i], a[j])) {
				swap(a[i], a[j]);
			}
		}
	}
	for(int i = n; i >= 1; i --) {
		printf("%d ", a[i].id);
	}
}
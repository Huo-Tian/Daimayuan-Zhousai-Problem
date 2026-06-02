#include<bits/stdc++.h>
using namespace std;
const int N = 1E5;

int n, m, a[N + 10], f[3][N + 10];
vector<int> g[N + 10];
long long s[3];

void add(int i, int x) {
	s[x] += a[i];
	f[x][i] = 1;
	printf("%d\n", x);
}
int main() {
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for(int i = 1; i <= m; i ++) {
		int u, v;
		scanf("%d%d", &u, &v);
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i = 1; i <= n; i ++) {
		int c[3]{};
		for(auto j : g[i]) {
			for(int k = 1; k <= 2; k ++) {
				if(f[k][j]){
					c[k] = 1;
				}
			}
		}
		if(c[1] == 1 && c[2] == 1) {
			printf("-1\n");
			continue;
		}
		if(c[1] == 1) {
			add(i, 2);
		} else if(c[2] == 1) {
			add(i, 1);
		} else {
			if(s[1] <= s[2]){
				add(i, 1);
			} else {
				add(i, 2);
			}
		}
	}
}
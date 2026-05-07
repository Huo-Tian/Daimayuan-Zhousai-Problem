#include <bits/stdc++.h>
using namespace std;

int n, a[1000001], cnt = 0;
long long ans;
map<int, int> s;

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i ++) {
		s[a[i]] ++;
	}
	for(int i = 1; i <= n; i ++) {
		ans += (s[a[i]] - 2) * (s[a[i]] - 2) * (s[a[i]] - 2) * 1LL;
	}
	cout << ans << endl;
}
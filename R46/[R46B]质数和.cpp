//[R46B]质数和

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int L, R;

bool check(int x) {
	for(int i = 2; i * i <= x; i ++) {
		if(x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ll ans = 0;
	scanf("%d%d", &L, &R);
	for(int i = L; i <= R; i ++) {
		if(check(i)) {
			ans += i * 1ll;
		}
	}
	printf("%lld\n", ans);
}
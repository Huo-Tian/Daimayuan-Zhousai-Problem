//[R48B]相等数对
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1010;
int n, a[N], b[N];
ll ans = 0;

bool check(int first, int second) {
	if(a[first] == b[second] && first != second) {
		return true;
	}
	return false;
}

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	} 
	for(int i = 1; i <= n; i ++) {
		cin >> b[i];
	}
	for(int i = 1; i <= n; i ++) {
		if(i == 1) {
			for(int j = 2; j <= n; j ++) {
				if(check(i, j)) {
					ans++;
				}
			}
		} else if(i == n) {
			for(int j = 1; j < n; j ++) {
				if(check(i, j)) {
					ans++;
				}
			}
		} else {
			for(int j = 1; j < i; j ++) {
				if(check(i, j)) {
					ans++;
				}
			}
			for(int j = i + 1; j <= n; j ++) {
				if(check(i, j)) {
					ans++;
				}
			}
		}
	}
	cout << ans << endl;
}
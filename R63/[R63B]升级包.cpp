#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int strength[100100];

bool cmp(int x, int y){ 
	return x > y;
} 

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> strength[i];
	}
	sort(strength + 1, strength + n + 1, cmp);
	ll strengthans = 0;
	int cnt = 0;
	for(int i = 1; i <= n; i ++) {
		if(n - cnt < 3) break;
		strengthans += strength[i] * 1LL;
		cnt += 3;
	}
	cout << strengthans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int n, a[100010];

int main() {
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		sum += a[i];
	}
	sum = (sum % 2 ? (sum + 1) / 2 : sum / 2);
	bool flag = true;
	for(int i = 1; i <= n; i ++) {
		if(a[i] >= sum) {
			flag = false;
			break;
		}
	}
	cout << (flag ? "Yes" : "No") << endl;
}
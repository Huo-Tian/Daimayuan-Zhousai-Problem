#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
	cin >> a >> b;
	for(int i = 1; i <= a; i ++) {
		for(int j = 1; j <= b; j ++) {
			cout << i * j << " ";
		}
		cout << endl;
	}
}
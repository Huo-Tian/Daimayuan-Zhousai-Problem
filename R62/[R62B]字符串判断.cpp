#include <bits/stdc++.h>
using namespace std;

int n;
string s, t;

int main() {
	cin >> n;
	cin >> s >> t;
	for(int i = 0; i < n; i ++) {
		if(s[i] != '?' && t[i] != '?' && s[i] != t[i]) {
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";
}
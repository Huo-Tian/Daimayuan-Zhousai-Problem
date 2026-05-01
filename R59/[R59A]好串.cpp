#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == 'W' && s[i + 1] == 'A') {
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	cin >> s;
	bool allnotminus = true;
	int n = s.size();
	for(int i = 0; i < n - 1; i ++) {
		if(s[i] < s[i + 1]) {
			allnotminus = false;
		}
	}
	cout << (allnotminus ? "Yes\n" : "No\n");
}
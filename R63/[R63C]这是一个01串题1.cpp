#include <bits/stdc++.h>
using namespace std;

int n;
string s, t;
bool same[200010];

int main() {
	cin >> n;
	cin >> s >> t;
	for(int i = 0; i < n; i ++) {
		same[i + 1] = (s[i] != t[i] ? true : false);
	}
	int times = 0;
	bool flag = false;
	for(int i = 1; i <= n; i ++) {
		if(same[i] == true) {
			if(!flag) flag = true, times++;
			else continue;
		} else {
			if(flag) flag = false;
		}
	}
	cout << times << endl;
}
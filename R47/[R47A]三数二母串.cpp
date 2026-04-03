//三数二母串

#include <iostream>
#include <string>
using namespace std;

string s, ans;

int main() {
	cin >> s;
	for(int i = 0; i < s.size(); i ++) {
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
			for(int c = 1; c <= 2; c++) {
				ans += s[i];
			}
		} else if(s[i] >= '0' && s[i] <= '9') {
			for(int c = 1; c <= 3; c++) {
				ans += s[i];
			}
		}
	}
	cout << ans << endl;
}
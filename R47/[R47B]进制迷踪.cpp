#include <bits/stdc++.h>
using namespace std;

string s;
struct Can {
	bool two, eight, ten, sixteen;
}x;

int main() {
	cin >> s;
	x.two = x.eight = x.sixteen = x.ten = true;
	int n = s.size();
	for(int i = 0; i < n; i ++) {
		//cout << (s[i] == '8' ? "Yes" : "No") << endl;
		if(s[i] >= 'A' && s[i] <= 'F') {
			x.two = x.eight = x.ten = false;
			//break;
		}
		
		if(s[i] >= '8' && s[i] <= '9') {
			x.eight = x.two = false;
			//break;
		}
		if(s[i] >= '2' && s[i] <= '9') {
			x.two = false;
			//break;
		}
 	}
 	int two, eight, ten, sixteen;
 	two = ten = eight = sixteen = 0;
	int ans = 0, jz = -1;
 	if(x.two == true) {
 		int base = 1;
 		for(int i = n - 1; i >= 0; i --) {
 			two += (s[i] - '0') * base;
 			base *= 2;
 		}
		jz = two;
		ans++;
		printf("JZ TWO\n");
 	}
 	if(x.eight == true) {
 		int base = 1;
 		for(int i = n - 1; i >= 0; i --) {
 			eight += (s[i] - '0') * base;
 			base *= 8;
 		}
		if(jz == -1) {
			jz = eight;
			ans++;
			printf("JZ EGT\n");
		} else if(eight != jz) {
			ans++;
		}
 	}
 	if(x.ten == true) {
 		int base = 1;
 		for(int i = n - 1; i >= 0; i --) {
 			ten += (s[i] - '0') * base;
 			base *= 10;
 		}
		if(jz == -1) {
			jz = ten;
			ans++;
			printf("JZ TEN\n");
		} else if(ten != jz) {
			ans++;
		}
 	}
 	if(x.sixteen == true) {
 		int base = 1;
 		for(int i = n - 1; i >= 0; i --) {
 			if(s[i] >= '0' && s[i] <= '9'){
	 			sixteen += (s[i] - '0') * base;
	 		} else if(s[i] >= 'A' && s[i] <= 'F') {
	 			sixteen += (s[i] - 55) * base;
	 		}
	 		base *= 16;
 		}
		if(jz == -1) {
			jz = sixteen;
			ans++;
			printf("JZ STN\n");
		} else if(sixteen != jz) {
			ans++;
		}
 	}
	cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int chinese, english, math;

int main() {
	cin >> chinese >> english >> math;
	if(chinese >= 90 && english >= 90 && math >= 90) {
		cout << "全能之星\n";
	} else {
		cout << "继续努力\n";
	}
}
//R48-四舍五入

#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
	double nt = (double)(n / 10.0);
	nt = round(nt);
	cout << (int)(nt * 10) << endl;
}
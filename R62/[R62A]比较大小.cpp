#include <bits/stdc++.h>
using namespace std;

int x, y;

int main() {
	cin >> x >> y;
	cout << max(10 * x + y, 10 * y + x);
}
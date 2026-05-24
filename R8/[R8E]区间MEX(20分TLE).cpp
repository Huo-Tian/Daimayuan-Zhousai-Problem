#include <bits/stdc++.h>
using namespace std;

int n;
int p[2000100];
int a[2000010];
bool b[2000010];
int zma = 0;

int MEX(int l, int r) {
	int ma = 0;
    for(int i = 0; i <= zma; i ++) {
        b[i] = false;
    }
	for(int i = l; i <= r; i ++) {
		b[p[i]] = true;
		ma = max(ma, p[i]);
	}
	for(int i = 0; i <= ma; i ++) {
		if(b[i] != true) {
            //cout << l << " " << r << " " << i << endl;
			return i;
		}
	}
    //cout << l << " " << r << " ma:" << ma + 1 << endl;
    return ma + 1;
}

int main() {
	cin >> n;
	for(int i = 1; i <= n + 1; i ++) {
		cin >> p[i];
        zma = max(zma, p[i]);
	}
	for(int l = 1; l <= n + 1; l ++) {
		for(int r = l; r <= n + 1; r ++) {
			a[MEX(l, r)] ++;
		}
	}
	for(int i = 0; i <= n; i ++) {
		cout << a[i] << " ";
	}
}
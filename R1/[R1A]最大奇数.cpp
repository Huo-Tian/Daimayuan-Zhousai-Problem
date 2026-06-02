#include <bits/stdc++.h>
using namespace std;

int n, a[10000001], maji = -99999;

int main() {
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++){
		scanf("%d", &a[i]);
		if(a[i] > maji && a[i] % 2 == 1){
			maji = a[i];
		}
	}
	if(maji == -99999){
		printf("-1");
		return 0;
	} else {
		printf("%d", maji);
	}
}
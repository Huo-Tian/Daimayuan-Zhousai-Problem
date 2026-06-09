#include <bits/stdc++.h>
using namespace std;

int a[3], sum = 0;

int main() {
	scanf("%d%d", &a[1], &a[2]);
	for(int i = 1; i <= 2; i ++) {
		if(a[2] > a[1]){
			sum += a[2];
			a[2] --;
		} else {
			sum += a[1];
			a[1] --;
		}
	}
	printf("%d", sum);
}
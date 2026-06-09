#include <bits/stdc++.h>
using namespace std;

int k, a, b;

int main() {
	scanf("%d%d%d", &k, &a, &b);
	int ans = 0;
	for(int i = 1; i <= a * b; i ++){
		if(i % a == 0 && i % b == 0){
			ans = i;
			break;
		}
	}
	printf("%d", ans * k);
}
#include <bits/stdc++.h>
using namespace std;

int n, b[100010], cnt;

int main() {
	scanf("%d", &n);
	for (int i = 2; i <= n; ++i){
		if(n % i == 0){
			b[++cnt] = i;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(cnt < 2)
		printf("-1");
	else{
		printf("%d", b[cnt - 1]);
	}
}
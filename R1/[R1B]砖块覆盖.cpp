#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, a, b;
	scanf("%d", &t);
	for(int i = 1; i <= t; i ++){
		scanf("%d%d", &a, &b);
		if(a * b % 2 == 0){
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
}
#include<bits/stdc++.h>
using namespace std;

long long n, v[1000001], c[1000001], ma;

int main() {
	scanf("%lld", &n);
	for(int i = 1; i <= n; i ++){
		scanf("%lld%lld", &v[i], &c[i]);
		if(v[i] - c[i] > 0){
			ma += v[i] - c[i];
		}
	}
	printf("%lld", ma);
}
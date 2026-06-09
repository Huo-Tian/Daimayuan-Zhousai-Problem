#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,h;
	int lef;
	scanf("%d%d",&a,&h);
	lef=h-1;
	for(int i=1;i<=h;i++){
		for(int i=1;i<=lef;i++){
			printf(" ");
		}
		for(int i=1;i<=a;i++){
			printf("+");
		}
		lef--;
		a+=2;
		printf("\n");
	}
}
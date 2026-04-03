#include<bits/stdc++.h>
using namespace std;

int T;

int main() {
	cin >> T;
	for(; T --; ) {
		int h, m;
		scanf("%d:%d", &h, &m);
		
			if(m == 0 || (m > 0 && m < 15)) {
				if(h >= 0 && h <= 9) 
					printf("0%d:15\n", h);
				else
					printf("%d:15\n", h);
			} else if(m == 15 || (m > 15 && m < 30)) {
				if(h >= 0 && h <= 9) 
					printf("0%d:30\n", h);
				else
					printf("%d:30\n", h);
			} else if(m == 30 || (m > 30 && m < 45)) {
				if(h >= 0 && h <= 9) 
					printf("0%d:45\n", h);
				else
					printf("%d:45\n", h);
			} else if(m == 45 || (m > 45 && m < 59)) {
				if(((h + 1) % 24) >= 0 && ((h + 1) % 24) <= 9) 
					printf("0%d:00\n", (h + 1) % 24);
				else
					printf("%d:00\n", (h + 1) % 24);
			}
		}
}
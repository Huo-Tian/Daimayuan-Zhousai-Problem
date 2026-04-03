#include <bits/stdc++.h>
using namespace std;

const int N = 110;

int n;
int a[N][N];
int b[N][N];
int c[N][N];

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= n; j ++) {
			cin >> a[i][j];			
		}
	} 
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= n; j ++) {
			cin >> b[i][j];			
		}
	} 
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= n; j ++) {
			for(int k = 1; k <= n; k ++) {
				c[i][j] = a[i][k] * b[k][j];
			}	
		}
	} 
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= n; j ++) {
			cout << c[i][j] << " ";			
		}
		cout << endl;
	} 
}
#include <bits/stdc++.h>
using namespace std;

long long T, a, b;
int c1[10010], c2[11100], ans[100010];

int main() {
    cin >> T;
    for(; T --; ) {
        cin >> a >> b;
        c1[1] = c2[1] = 1;
        int la, lb, lc;
        la = lb = 1000;
        for(int j = 1; j <= la; j ++)
			c1[j] *= 2;
		for(int j = 1; j <= la; j ++) {
			c1[j + 1] += c1[j] / 10;
			c1[j] %= 10;
		}
		while(c1[la + 1] > 0){
			++ la;
			c1[la + 1] = c1[la] / 10;
			c1[la] %= 10;
		}
        for(int j = 1; j <= lb; j ++)
			c2[j] *= 5;
		for(int j = 1; j <= lb; j ++) {
			c2[j + 1] += c2[j] / 10;
			c2[j] %= 10;
		}
		while(c2[lb + 1] > 0){
			++ lb;
			c2[lb + 1] = c2[lb] / 10;
			c2[la] %= 10;
		}
        lc = max(la, lb);
        memset(ans, 0, sizeof(ans));
        for(int i = 1; i <= lc; i++){
            ans[i] = c1[i] + c2[i] + ans[i];
            ans[i + 1] = ans[i] / 10;
            ans[i] %= 10;
        }
        if(ans[lc + 1] > 0){
            lc ++;
        }
        for(int i = lc; i >= 1; i --){
            printf("%d", ans[i]);
        }
    }
}
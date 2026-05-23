#include <bits/stdc++.h>
using namespace std;

int n;
int q, p;
int x;
int a[200010];
bool turn = true;
bool work = true;

int main() {
	//turn 左为false, 右为true
	//work 改为true，不改为false
	cin >> n >> q >> p;
	memset(a, 0, sizeof(a));
	for(; q--; ) {
		int opt;
		cin >> opt;
		if(opt == 1) {
			cin >> x;
            for(; x-- ;) {
                if((turn == false && p == 1) || (turn == true && p == n)) {
                    break;
                }
                if(turn == false) {
                    p --;
                } else {
                    p ++;
                }
                if(work == true) {
                    a[p] = (a[p] == 1 ? 0 : 1);
                }
            }
		}
        else if(opt == 2) {
            turn = (turn == true ? false : true);
        } else if(opt == 3){
            work = (work == true ? false : true);
        }
	}
	for(int i = 1; i < n; i ++) {
		cout << a[i] << " ";
	}
    cout << a[n];
}
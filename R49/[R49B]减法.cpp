#include <bits/stdc++.h>
using namespace std;

int k;
string x;

int main() {
    scanf("%d ", &k);
    cin >> x;
	int m = x.size();
    bool ids = false, ids2 = false;
	for(int i = 1; i <= k - m; i ++) {
		cout << "9";
        ids = true;
	}
	for(int i = 0; i < m; i ++) {
		if((9 - (x[i] - '0')) == 0 && ids == false) {
            continue;
        } else {
            cout << '9' - x[i];
            ids2 = true;
        }
	}
    if(!ids2) {
        cout << 0 << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    for(int i = 1; i <= 78; i ++) {
        for(int j = 1; j <= 30; j ++) {
            if((i - 1) * 30 + j == n) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}
//高考加油! RP++! AK!
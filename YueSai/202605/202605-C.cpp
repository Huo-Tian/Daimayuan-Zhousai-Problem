#include <bits/stdc++.h>
using namespace std;

int x;

int main() {
    int cnt = 0;
    while(cin >> x) {
        if(x == -1) {
            break;
        }
        if(x >= 60) {
            cnt ++;
        }
    }
    cout << cnt << endl;
}
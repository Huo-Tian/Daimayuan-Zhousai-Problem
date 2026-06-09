#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    int cnt = 0;
    while(n > 0) {
        cnt ++;
        if(n % 2) n -= 1;
        else n /= 2;
    }
    cout << cnt << endl;
}
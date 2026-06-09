#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;
string x;

bool check(int x) {
    for(int i = 2; i * i <= x; i ++) {
        if(x % i == 0) return false;
    }
    return true;
}

int main() {
    cin >> x;
    for(int i = 0; i < x.size(); i ++) {
        n = n * 10 + (x[i] - '0');
        cnt += x[i] - '0';
    }
    if(check(cnt) && check(n)) cout << "Yes\n";
    else cout << "No\n";
}
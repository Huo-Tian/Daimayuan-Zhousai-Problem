#include <bits/stdc++.h>
using namespace std;

int x;


int main() {
    cin >> x;
    int res = ((((x - 2026) * 6 + 2) % 7) + 7) % 7;
    if(!res) res = 7;
    cout << "1 " << res;
}
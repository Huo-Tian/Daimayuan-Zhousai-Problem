#include <bits/stdc++.h>
using namespace std;

array<int, 3>a;
//数列

int main() {
    a[1] = 2;
    auto [p, q, r] = a;

    for(int i = 0; i < 3; i ++) {
        cout << a[i] << endl;
    }
}
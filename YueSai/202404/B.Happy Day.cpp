#include <bits/stdc++.h>
using namespace std;

int a1, a2;

int main() {
    cin >> a1 >> a2;
    if(a1 % 99 == 0 || a2 % 99 == 0) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
    }
}
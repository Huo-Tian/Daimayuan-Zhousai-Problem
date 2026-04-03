#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    if(n >= 100) {
        n -= 20;
    }
    n += 5;
    cout << n << endl;
}
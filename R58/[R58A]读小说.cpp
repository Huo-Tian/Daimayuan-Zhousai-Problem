#include <bits/stdc++.h>
using namespace std;

int x, a, b;

int main() {
    cin >> x >> a >> b;
    int sum = 1;
    x -= a;
    if(x % b != 0) {
        sum ++;
    }
    sum += x / b;
    cout << sum << endl;
}
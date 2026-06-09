#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    if(n % 10 == 0) {
        cout << "Multiple of 10\n";
    } else if(n % 2 == 0) {
        cout << "Even (not 10)\n";
    } else {
        cout << "Odd\n";
    }
}
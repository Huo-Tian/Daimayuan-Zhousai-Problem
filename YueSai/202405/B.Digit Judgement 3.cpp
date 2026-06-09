#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    int a = n % 10;
    int b = n / 10 % 10;
    int c = n / 100 % 10;
    if((a + b) % 9 == 0 || (a + c) % 9 == 0 || (b + c) % 9 == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}
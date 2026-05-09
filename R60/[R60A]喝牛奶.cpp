#include <bits/stdc++.h>
using namespace std;

int x;
int y;

int main() {
    cin >> x >> y;
    cout << ((y - x) * 10 % 4 == 0 ? (y - x) * 10 / 4 : (y - x) * 10 / 4 + 1);
}
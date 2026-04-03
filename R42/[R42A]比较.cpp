#include <bits/stdc++.h>
using namespace std;

int x, y;
char c;

int main() {
    cin >> x >> c >> y;
    if((c == '>' && x > y) || (c == '=' && x == y) || (c == '<' && x < y)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
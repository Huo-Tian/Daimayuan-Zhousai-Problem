#include <bits/stdc++.h>
using namespace std;

int T;
int a, b;

int main() {
    cin >> T;
    for(; T--; ) {
        cin >> a >> b;
        if(a * 2 > b) {
            cout << "NOIP\n";
        } else {
            cout << "NOI\n";
        }
    }
}
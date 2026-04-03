#include <bits/stdc++.h>
using namespace std;

int n, m;
string a;

int main() {
    cin >> n >> m;
    cin >> a;
    for(int i = 1; i <= n - a.size(); i ++) {
        cout << "0";
    }
    cout << a << endl;
}
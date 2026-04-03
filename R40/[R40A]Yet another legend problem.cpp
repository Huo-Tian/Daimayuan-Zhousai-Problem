#include <bits/stdc++.h>
using namespace std;

int x;

int main() {
    cin >> x;
    if(x % 24 >= 6 && x % 24 <= 18) cout << "I love Shawarma";
    else cout << "Shawarma is the best food";
}
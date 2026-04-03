#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[101010];

int main() {
    cin >> n >> x;
    double rating = x;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        rating = floor((rating + a[i]) / 2.0);
    }
    cout << rating << endl;
}
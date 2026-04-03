#include <bits/stdc++.h>
using namespace std;

int n, x, y, k;

int main() {
    cin >> n >> x >> y >> k;
    int sum = y, sum1 = 0;
    for(int i = x; i < k; i ++) {
        sum1 = (sum + 1) % n;
        if(sum1 == 0) sum1 = n;
        sum = sum1;
    }
    cout << sum << endl;
}
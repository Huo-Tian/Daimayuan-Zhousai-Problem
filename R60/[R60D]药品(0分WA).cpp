#include <bits/stdc++.h>
using namespace std;

int x, y, u, v;

bool check(int mid) {
    int st = 0, dt = 0;
    st = (mid / u) * v + min(mid % u, v);
    dt = mid - st;
    int sen = u + v - st - st;
    if (sen <= dt) {
        return true;
    }
    return false;
}

int main() {
    cin >> x >> y >> u >> v;
    int L = 0, R = u / v;
    while (L + 1 < R) {
        int mid = (L + R) / 2;
        if (check(mid)) {
            R = mid;
        } else {
            L = mid;
        }
    }
    cout << L << endl;
}
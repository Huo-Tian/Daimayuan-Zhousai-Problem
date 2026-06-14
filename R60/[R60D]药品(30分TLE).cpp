#include <bits/stdc++.h>
using namespace std;

int x, y, u, v;

bool check(int mid) {
    int st = 0, dt = 0;
    st = (mid / u) * v + min(mid % u, v);
    dt = mid - st;
    int sena = (x - st), senb = (y - st);
    //printf("吃两种药:%d 吃一种药:%d A剩余:%d B剩余:%d\n", st, dt, sena, senb);
    if (sena <= dt && senb <= dt && sena + senb <= dt) {
        return true;
    }
    return false;
}

int main() {
    cin >> x >> y >> u >> v;
    int L = 0, R = x + y + 1;
    while (L + 1 < R) {
        //cout << L << " " << R << " ";
        int mid = (L + R) / 2;
        if (check(mid)) {
            R = mid;
        } else {
            L = mid;
        }
    }
    cout << R << endl;
}
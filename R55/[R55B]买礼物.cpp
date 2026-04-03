#include <bits/stdc++.h>
using namespace std;

struct Gifts {
    int v, p;
    int happy;
}a[100010];

int n, x;

bool cmp(Gifts a, Gifts b) {
    return a.happy > b.happy;
}

int main() {
    cin >> n >> x;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].v;
        cin >> a[i].p;
        a[i].happy = a[i].v * a[i].p;
    }
    int sum = 0;
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i ++) {
        if(sum + a[i].happy >= x) {
            cout << i << endl;
            return 0;
        }
        sum += a[i].happy;
    }
    cout << -1 << endl;
}
#include <bits/stdc++.h>
using namespace std;

int n;
struct Node {
    int a, get, t, at;
    int rt = 0;
}a[200010];

bool front_cmp(Node x, Node y){
    return x.a < y.a;
}

bool middle_cmp(Node x, Node y){
    return x.get < y.get;
}

bool rear_cmp(Node x, Node y){
    return x.at < y.at;
}

int main() {
    cin >> n;
    int start = 0, cnt = 1;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].a;
        if(a[i].a == 0) {
            start = i;
            a[i].get = cnt;
            a[i].rt = 0;
            cnt++;
        }
        a[i].at = i;
    }
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].t;
    }
    sort(a + 1, a + n + 1, front_cmp);
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= n; j ++) {
            if(a[j].a == start) {
                a[j].get = cnt;
                start = a[j].at;
                cnt++;
            }
        }
    }
    sort(a + 1, a + n + 1, middle_cmp);
    for(int i = 1; i <= n; i ++) {
        a[i].rt = a[i - 1].rt + a[i - 1].t;
    }
    sort(a + 1, a + n + 1, rear_cmp);
    for(int i = 1; i <= n; i ++) {
        cout << a[i].rt << " ";
    }
}
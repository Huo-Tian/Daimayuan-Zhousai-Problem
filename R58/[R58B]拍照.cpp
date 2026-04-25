#include <bits/stdc++.h>
using namespace std;

int n, x, p, timer = 0;
int a[100010];
bool flag = false;

int main() {
    cin >> n >> x >> p;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 1; i <= n; i ++) {
        if(flag == true && timer == 0) {
            flag = false;
        }
        if(flag == false) {
            if(a[i] >= p) {
                cnt ++;
                //cout << i << endl;
                timer = x + 1;
                flag = true;
            }
        }
        timer = (timer >= 1 ? timer - 1 : timer);
        //cout << timer << " ";
    }
    cout << cnt << endl;
}
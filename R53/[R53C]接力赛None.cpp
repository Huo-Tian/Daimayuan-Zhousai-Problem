#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];
int t[100010];
int nex[100010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        nex[a[i]] = i;
    }
    for(auto y : nex) {
        //Stop
    }
}
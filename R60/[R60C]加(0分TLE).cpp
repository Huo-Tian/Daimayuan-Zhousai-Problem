#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100010];
bool visited[100010];
long long ans = 0;

inline void dfs(int x) {
    if (x == m + 1) {
        int sum = INT_MIN;
        for (int i = 1; i <= n; i ++) {
            sum = max(sum, a[i]);
            //cout << a[i] << " ";
        }
        ans = max(ans, sum * 1LL);
        //cout << ans << endl;
    }
    for (int i = 1; i < n; i ++) {
        if (!visited[i]) {
            int sumer = a[i];
            a[i + 1] = a[i + 1] + sumer;
            a[i] = 0;
            visited[i] = true;
            dfs(x + 1);
            visited[i] = false;
            //cout << i << " ";
            a[i + 1] -= sumer;
            a[i] = sumer;
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    dfs(1);
    cout << ans << endl;
}
    #include <bits/stdc++.h>
    using namespace std;

    int n, m;
    char s[1010][1010];

    int main() {
        cin >> n >> m;
        for (int i = 1; i <= n; i ++) {
            for (int j = 1; j <= m; j ++) {
                cin >> s[i][j];
            }
        }
        int suner = 0;
        for (int i = 1; i <= n; i ++) {
            for (int j = 1; j <= m; j ++) {
                int sum = 0;
                sum += (s[i][j - 1] == '#' ? true : false);
                sum += (s[i][j + 1] == '#' ? true : false);
                sum += (s[i - 1][j] == '#' ? true : false);
                sum += (s[i + 1][j] == '#' ? true : false);
                if (sum == 1) suner ++;
            }
        }
        cout << suner << endl;
    }
    #include <bits/stdc++.h>
using namespace std;

int n;
string c[101000], s;
bool x[101100];
int sx[100100], sxcnt = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> c[i];
    }
    cin >> s;
    int cnt = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= n; j ++) {
            int size = c[j].size();
            if(c[j] == s.substr(cnt, size) && !x[j]) {
                x[j] = true;
                cnt += c[j].size();
                sx[++sxcnt] = j;
                break;
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        cout << sx[i] << " ";
    }
}

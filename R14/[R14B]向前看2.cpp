#include <bits/stdc++.h>
using namespace std;

int n, h[10001];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &h[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j ++) {
            if (h[j] > h[i]) {
                swap(h[j], h[i]);
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", h[i]);
    }
}
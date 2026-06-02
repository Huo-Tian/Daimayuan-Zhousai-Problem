#include <bits/stdc++.h>
using namespace std;

int n, x[3000], y[3000];

int Dist(int i, int j) {
    return (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    for (int i = 1; i <= n; ++i) {
        int p = -1;
        for (int j = 1; j <= n; ++j) {
            if (i == j) {
                continue;
            }
            if (p == -1 || (Dist(i, j) < Dist(i ,p))) {
                p = j;
            }
        }
        printf("%d ", p);
    }
}
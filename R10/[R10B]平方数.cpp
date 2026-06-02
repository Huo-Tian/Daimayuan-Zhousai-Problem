#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
    scanf("%lld", &n);
    long long A = sqrt(n);
    while (A * A > n) {
        A--;
    }
    while ((A + 1) * (A + 1) <= n) {
        A++;
    }
    printf("%lld\n", A * A);
}
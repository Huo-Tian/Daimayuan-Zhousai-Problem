#include <bits/stdc++.h>
using namespace std;

const int N = 1E5;
int n, A[N + 1], C[N + 1];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++) {
        scanf("%d", &A[i]);
        if(A[i] <= n)
           C[A[i]] = 1;
    }
    for(int i = 0; i <= n; i ++) {
        if(C[i] == 0){
            printf("%d\n", i);
            return 0;
        }
    }
}
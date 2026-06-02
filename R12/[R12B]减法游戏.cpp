#include <bits/stdc++.h>
using namespace std;

int a, b, scorea, scoreb;

int main() {
    scanf("%d %d", &a, &b);
    while (a != b) {
        if (a > b) {
            scorea++;
            a = a - b;
        }else if (a < b) {
            scoreb++;
            b = b - a;
        }
    }
    printf("%d %d", scorea, scoreb);
}
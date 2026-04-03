#include <bits/stdc++.h>
using namespace std;

long long A, B;

int main() {
    cin >> A >> B;
    cout << (A * B % 2 == 1 ? "Yes" : "No");
}
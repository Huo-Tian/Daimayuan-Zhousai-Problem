#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    int middle = (n - 3) / 2, x = middle;
    for(int i = 1; i <= n / 2; i ++) {
        for(int j = 1; j <= (n - 3 - middle * 2) / 2; j ++) {
            cout << " ";
        }
        cout << "*";
        for(int j = 1; j <= middle; j ++) {
            cout << " ";
        }
        cout << "*";
        for(int j = 1; j <= middle; j ++) {
            cout << " ";
        }
        cout << "*";
        for(int j = 1; j <= (n - 3 - middle * 2) / 2; j ++) {
            cout << " ";
        }
        middle--;
        cout << endl;
    }
    for(int i = 1; i <= n; i ++) {
        cout << "*";
    }
    cout << endl;
    middle ++;
    for(int i = 1; i <= n / 2; i ++) {
        for(int j = 1; j <= (n - 3 - middle * 2) / 2; j ++) {
            cout << " ";
        }
        cout << "*";
        for(int j = 1; j <= middle; j ++) {
            cout << " ";
        }
        cout << "*";
        for(int j = 1; j <= middle; j ++) {
            cout << " ";
        }
        cout << "*";
        for(int j = 1; j <= (n - 3 - middle * 2) / 2; j ++) {
            cout << " ";
        }
        middle ++;
        cout << endl;
    }
}
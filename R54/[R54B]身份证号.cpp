#include <bits/stdc++.h>
using namespace std;

string s;

bool check(string x) {
    bool CLL, NS, CK;
    CK = CLL = NS = true;
    if(x.size() != 8) {
        return false;
    }
    int lo = x.size();
    for(int i = 0; i < lo; i ++) {
        if(i >= 0 && i <= 1) {
            if(!(s[i] >= 'A' && s[i] <= 'G')) {
                CLL = false;
            }
        }
        if(i >= 2 && i <= 6) {
            if(!(s[i] >= '0' && s[i] <= '9')) {
                NS = false;
            }
        }
        if(i == 7) {
            if(!((s[i] >= '0' && s[i] <= '9') || s[i] == 'X')) {
                CK = false;
            }
        }
    }
    if(!(CK == true && CLL == true && NS == true)) {
        return false;
    } else {
        return true;
    }
}

int main() {
    cin >> s;
    cout << (check(s) ? "Yes" : "No");
}
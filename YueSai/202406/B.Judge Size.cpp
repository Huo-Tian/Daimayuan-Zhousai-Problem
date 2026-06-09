#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    a = n / 10;
    b = n % 10;
    int mma = 0, mmi = 0;
    if (a > b)
    {
        mma = a;
        mmi = b;
    }
    else
    {
        mma = b;
        mmi = a;
    }
    int cl = mma - mmi;
    if (cl % 2 == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
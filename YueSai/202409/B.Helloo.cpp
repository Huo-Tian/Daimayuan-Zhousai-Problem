#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hour, minute;
    scanf("%d%d", &hour, &minute);
    if ((hour >= 0 && hour <= 11) && (minute >= 0 && minute <= 59))
    {
        printf("good morning"); // TODO
    }
    else if ((hour >= 12 && hour <= 17) && (minute >= 0 && minute <= 59))
    {
        printf("good afternoon"); // TODO
    }
    else if ((hour >= 18 && hour <= 23) && (minute >= 0 && minute <= 59))
    {
        printf("good evening"); // TODO
    }
}
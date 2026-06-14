#include <bits/stdc++.h>
using namespace std;

int fashi, first_max_time, before_first_max_time, score;

int main() {
    printf("此题首次最高分的提交时间:");
    cin >> first_max_time;
    printf("分数:");
    cin >> score;
    printf("此题首次最高分之前的提交次数:");
    cin >> before_first_max_time;
    fashi = ceil(first_max_time * score / 100) + before_first_max_time * 5 * 60;
    cout << "罚时为：" << fashi << endl;
}
#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int original_num, num, cnt = 1, temp;
    cin >> original_num;
    if (original_num < 10) num = original_num * 10;
    temp = ((original_num / 10) + (original_num % 10));
    if (temp > 9) temp %= 10;
    num = (original_num % 10 * 10) + temp;
    while (num != original_num)
    {
        temp = num / 10 + num % 10;
        if (temp > 9) temp %= 10;
        num = ((num % 10) * 10 ) + temp;
        cnt++;
    }
    cout << cnt;
    return 0;
}
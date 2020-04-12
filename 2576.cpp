#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    int sum = 0, min = 101;
    for (int i = 0; i < 7; i++)
    {
        cin >> num;
        if (num % 2 != 0)
        {
            sum += num;
            if (min > num) min = num;
        }
    }
    if (min != 101) cout << sum << "\n" << min;
    else cout << -1;
    return 0;
}
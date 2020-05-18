#include <iostream>

using namespace std;

int main(void)
{
    int N, res = 0;
    int num[9] = {0};
    cin >> N;
    while (N)
    {
        int mod = N % 10;
        if (mod == 6 || mod == 9) num[6]++;
        else num[mod]++;
        N /= 10;
    }
    num[6] = (num[6] - 1) / 2 + 1;
    for (int i = 0; i < 9; i++)
        if (num[i] > res) res = num[i];
    cout << res;
    return 0;
}
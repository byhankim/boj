#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, cnt = -1;
    cin >> N;
    for (int i = 0, n; i <= N; i+=5)
    {
        if ((N - i) % 3 == 0)
        {
            n = i / 5 + (N - i) / 3;
            if (cnt == -1 || cnt > n) cnt = n;
        }
    }
    cout << cnt;
    return 0;
}
#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, cnt, idx = 123457 * 2;
    bool parr[idx];
    for (int i = 2; i < idx; i++) parr[i] = true;
    parr[0] = parr[1] = false;
    while (cin >> N && N != 0)
    {
        cnt = 0;
        for (int i = 2, idx = N * 2; i <= idx; i++)
        {
            if (!parr[i]) continue;
            for (int j = 2 * i; j <= idx; j+=i) parr[j] = false;
            if (i > N && parr[i]) cnt++;
        }
        cout << cnt << '\n';
    }
}
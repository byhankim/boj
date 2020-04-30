#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, idx = 0, sum = 0;
    cin >> N >> M;
    int arr[M] = {0};
    while (cin >> arr[idx] && idx < M) idx++;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i % arr[j] == 0)
            {
                sum += i;
                break;
            }
        }
    }
    cout << sum;
    return 0;
}
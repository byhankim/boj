#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int M, N, sum = 0, min = 10001;
    cin >> M >> N;
    for (int i = M; i <= N; i++)
    {
        for (int j = sqrt(i); j * j <= i; j++)
        {
            if (i - (j * j) == 0)
            {
                sum += i;
                min = (min > i) ? i : min;
                break;
            }
        }
    }
    if (sum > 0) cout << sum << '\n' << min;
    else cout << -1;
}
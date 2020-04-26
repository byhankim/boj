#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool is_prime;
    int M, N, min = 10001, sum_of_prime = 0;
    cin >> M >> N;
    for (int i = M; i <= N; i++)
    {
        is_prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime && i > 1)
        {
            if (min > i) min = i;
            sum_of_prime += i;
        }
    }
    if (sum_of_prime == 0)  cout << -1;
    else    cout << sum_of_prime << '\n' << min;
    // cout << (min != 10001) ? (int)min : (int)min - 10002;
    return 0;
}
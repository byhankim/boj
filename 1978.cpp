#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool is_prime;
    int N, cnt = 0;
    cin >> N;
    while (N--)
    {
        int temp = 0;
        is_prime = true;
        cin >> temp;
        if (temp < 2) continue;
        for (int i = 2; i < temp; i++)
        {
            if (temp % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)   cnt++;
    }
    cout << cnt;
    return 0;
}
#include <iostream>
using namespace std;
int main(void)
{
    bool is_prime;
    int M, N;
    cin >> M >> N;
    for (int i = M; i <= N; i++)
    {
        is_prime = true;
        if (i == 1) i++;
        for (int j = 2; j * j <= i; j++)
        {
            if (i != j && i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime) cout << i << '\n';
    }
    return 0;
}
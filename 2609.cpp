#include <iostream>
using namespace std;
int main(void)
{
    int n, m, tmp, gcd, lcm;
    cin >> n >> m;
    if (n > m)
    {
        tmp = n;
        n = m;
        m = tmp;
    }
    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
            break;
        }
    }
    for (int i = n; i <= n * m; i+=n)
    {
        if (i % n == 0 && i % m == 0)
        {
            lcm = i;
            break;
        }
    }
    cout << gcd << '\n' << lcm;
    return 0;
}
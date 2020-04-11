#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n;
    cin >> a >> b >> c;
    if (a == b && a == c)
        n = 10000 + a * 1000;
    else if (a == b || b == c || a == c)
        n = (a == b || a == c) ? (1000 + a * 100) : (1000 + b * 100);
    else
    {
        if (a >= b && a >= c) 
            n = a * 100;
        else if (b >= a && b >= c)
            n = b * 100;
        else if (c >= a && c >= b)
            n = c * 100;
    }
    cout << n;
    return 0;
}
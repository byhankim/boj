#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, C;
    cin >> A >> B >> C;
    if (A <= B)    // a >= b
    {
        if (A <= C)    // a largest
        {
            cout << A << ' ';
            if (B <= C)    // a b c
                cout << B << ' ' << C;
            else
                cout << C << ' ' << B;
        }
        else    // c largest
            cout << C << ' ' << A << ' ' << B;
    }
    else        // b > a
    {
        if (B <= C)    // b largest
        {
            cout << B << ' ';
            if (A <= C)
                cout << A << ' ' << C;
            else
                cout << C << ' ' << A;
        }
        else
            cout << C << ' ' << B << ' ' << A;
    }
    return (0);
}
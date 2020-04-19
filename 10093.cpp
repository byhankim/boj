#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long A, B;
    int diff;
    cin >> A >> B;
    diff = (B > A) ? B - A - 1 : A - B - 1;
    if (A == B) diff = 0;
    cout << diff << '\n';
    B = (B > A) ? A : B;
    while (diff--)
    {
        B++;
        cout << B << ' ';
    }
    return 0;   
}
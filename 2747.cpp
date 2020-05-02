#include <iostream>
using namespace std;

int num[46] = { 0 };

int f(int n)
{
    if (n < 2) return n;
    if (num[n]) return num[n];
    num[n] = f(n-1) + f(n-2);
    return (num[n]);
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
}
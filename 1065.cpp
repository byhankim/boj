#include <iostream>
using namespace std;
int number_of_hansoo(int N)
{
    int cnt = 99, h, t, o;
    if (N < 100)    return N;
    for (int i = 100; i <= N; i++)
    {
        h = i / 100;
        t = i / 10 % 10;
        o = i % 10;
        if (o - t == t - h) cnt++;
    }
    return cnt;
}

int main(void)
{
    int N;
    cin >> N;
    cout << number_of_hansoo(N);
}
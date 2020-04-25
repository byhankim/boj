#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, V, meters = 0, days = 0;
    cin >> A >> B >> V;
    while (1)
    {
        days++;
        meters += A;
        if (meters >= days) break;
        meters -= B;
    }
    cout << days;
    return 0;
}
#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++) cout << ' ';
        for (int j = 0; j < i * 2 + 1; j++) cout << '*';
        cout << '\n';
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < i + 1; j++) cout << ' ';
        for (int j = 0; j < N * 2 - (i * 2 + 3); j++) cout << '*';
        cout << '\n';
    }d
    return 0;
}
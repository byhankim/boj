#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 1, n, m = 1; i <= N; i++)
    {
        n = N-i;
        m = i * 2 - 1;
        for (int j = 0; j < n + m; j++)
        {
            if (j < n) cout << ' ';
            else cout << '*';
        }
        cout << '\n';
    }
}
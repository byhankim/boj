#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, V, cnt = 0;
    cin >> N;
    int *arr = new int(N);
    for (int i = 0; i < N; i++)
    {
        cin >> V;
        arr[i] = V;
    }
    cin >> V;
    for (int i = 0; i < N; i++) if (arr[i] == V) cnt++;
    cout << cnt;
    return 0;
}
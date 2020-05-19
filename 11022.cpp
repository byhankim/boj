#include <iostream>

using namespace std;

int main(test_again)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int A, B;
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A+B << '\n'; 
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cin >> i;
    while (i--)
    {
        char charr[21];
        cin >> j >> charr;
        int temp = j;
        for (int i = 0; charr[i] != '\0'; ++i)
        {
            while (j--)
                cout << charr[i];
            j = temp;
        }
        cout << "\n";
    }
    return 0;
}
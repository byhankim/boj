#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int score[8];
    for (int i = 0; i < 8; i++) cin >> score[i];
    if (score[0] == 1)
    {
        for (int i = 0; i < 8; i++)
        {
            if (score[i] != i + 1)
            {
                cout << "mixed\n";
                return 0;
            }
        }
        cout << "ascending\n";
    }
    else if (score[0] == 8)
    {
        for (int i = 0; i < 8; i++)
        {
            if (score[i] != 8 - i)
            {    
                cout << "mixed\n";
                return 0;
            }
        }
        cout << "descending\n";
    }
    else cout << "mixed\n";
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int total_cnt = 12;
    int score = 0;
    int temp = 0;
    
    while (total_cnt--)
    {
        cin >> temp;
        if (temp == 1) score++;
        if (total_cnt % 4 == 0)
        {
            if (score == 3) cout << "A\n";
            else if (score == 2) cout << "B\n";
            else if (score == 1) cout << "C\n";
            else if (score == 0) cout << "D\n";
            else cout << "E\n";
            score = 0;
        }
    }
    return 0;
}
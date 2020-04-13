#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int score, grade, n;
    char charr[81];
    cin >> n;
    while (n--)
    {
        cin >> charr;
        grade = 0;
        score = 0;
        for (int i = 0; charr[i] != '\0'; i++)
        {
            if (charr[i] == 'O') score++;
            else score = 0;
            grade += score;
        }
        cout << grade << "\n";
    }
    return 0;
}
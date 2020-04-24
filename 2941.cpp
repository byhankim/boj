#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int  wcount = 1;
    char word[101];
    cin >> word;
    for (int i = 1; word[i]; i++)
    {
        wcount++;
        if (word[i] == 'j')
        {    if (word[i-1] == 'l' || word[i-1] == 'n') wcount--;}
        else if (word[i] == '-')
        {    if (word[i-1] == 'c' || word[i-1] == 'd') wcount--;}
        else if (word[i] == '=')
        {
            if (word[i-1] == 'c' || word[i-1] == 's' || word[i-1] == 'z')
            {    wcount--;}
            if (i > 1 && (word[i-1] == 'z' && word[i-2] == 'd'))
            {    wcount--;}
        }
    }
    cout << wcount;
    return 0;
}
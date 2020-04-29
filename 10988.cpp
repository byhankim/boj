#include <iostream>
using namespace std;
int main(void)
{
    int l = 0, p = 1, i = 0, j;
    char word[101] = {0};
    cin >> word;
    while (word[i]) i++, l++;
    i = 0;
    j = l - 1;
    while (i < j)
    {
        if (word[i] != word[j])
        {
            p = 0;
            break;
        }
        i++, j--;
    }
    cout << p;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string  word;
    bool    is_palindrome = false;
    while ((cin >> word) && (word != "0"))
    {
        for (int i = 0, j = word.length(); i < j; i++, j--)
        {
            if (word[i] != word[j - 1])
            {
                cout << "no\n";
                is_palindrome = false;
                break;
            }
            is_palindrome = true;
        }
        if (is_palindrome) cout << "yes\n";
    }

    return 0;
}